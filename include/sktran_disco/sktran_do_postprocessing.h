#pragma once
#include "sktran_disco/sktran_do.h"

/* Standalone functions for postprocessing of discrete ordinates solutions
 *
 */

namespace sasktran_disco::postprocessing {
    // Layer multipliers

    /** Calculates the homogeneous solution multiplier, h_plus, sampled at a
     * relative location layer_fraction within the layer.
     *
     * @param thickness Layer optical depth
     * @param eigval Eigenvalue corresponding to this homogenous solution
     * @param layer_relative_location Relative location in optical depth
     * coordinates. 0 for top of the layer, 1 for bottom of the layer.
     */
    template <int CNSTR = -1>
    inline void
    h_plus_sampled(const sasktran_disco::LayerDual<double>& thickness,
                   const sasktran_disco::VectorLayerDual<double, CNSTR>& eigval,
                   sasktran_disco::SolutionIndex solution_index,
                   double layer_relative_location,
                   sasktran_disco::LayerDual<double>& h_plus) {
        h_plus.value = std::exp(-1.0 * eigval.value(solution_index) *
                                thickness.value * layer_relative_location);

        // calculate the derivatives, only have layer derivatives
        h_plus.deriv =
            -h_plus.value * (eigval.deriv(Eigen::all, solution_index) *
                                 thickness.value * layer_relative_location +
                             thickness.deriv * eigval.value(solution_index) *
                                 layer_relative_location);
    }

    /** Calculates the homogeneous solution multiplier, h_minus, sampled at a
     * relative location layer_fraction within the layer.
     *
     * @param thickness Layer optical depth
     * @param eigval Eigenvalue corresponding to this homogenous solution
     * @param layer_relative_location Relative location in optical depth
     * coordinates. 0 for top of the layer, 1 for bottom of the layer.
     */
    template <int CNSTR = -1>
    inline void h_minus_sampled(
        const sasktran_disco::LayerDual<double>& thickness,
        const sasktran_disco::VectorLayerDual<double, CNSTR>& eigval,
        sasktran_disco::SolutionIndex solution_index,
        double layer_relative_location,
        sasktran_disco::LayerDual<double>& h_minus) {
        h_minus.value =
            std::exp(-eigval.value(solution_index) * thickness.value *
                     (1 - layer_relative_location));

        // Calculate the derivatives, only have layer derivatives
        h_minus.deriv = -h_minus.value *
                        (eigval.deriv(Eigen::all, solution_index) *
                             thickness.value * (1 - layer_relative_location) +
                         thickness.deriv * eigval.value(solution_index) *
                             (1 - layer_relative_location));
    }

    /** Calculates the green's function solution multipier, d_minus, sampled at
     * a relative location layer_fraction within the layer
     *
     * @param thickness
     * @param eigval
     * @param solution_index
     * @param layer_relative_location
     * @param transmission
     * @param average_secant
     * @param layerderivstart
     * @param d_minus
     */
    template <int CNSTR = -1>
    inline void d_minus_sampled(
        const sasktran_disco::LayerDual<double>& thickness,
        const sasktran_disco::VectorLayerDual<double, CNSTR>& eigval,
        sasktran_disco::SolutionIndex solution_index,
        double layer_relative_location,
        const sasktran_disco::Dual<double>& transmission,
        const sasktran_disco::Dual<double>& average_secant, int layerderivstart,
        sasktran_disco::Dual<double>& d_minus) {
        // Convenience factors
        double x = thickness.value * layer_relative_location;
        double denom = average_secant.value - eigval.value(solution_index);

        // Start by calculating the value without the transmission factor and
        // denom (avoids a potential division by 0 later)
        d_minus.value = (exp(-x * eigval.value(solution_index)) -
                         exp(-x * average_secant.value));

        // Add in the total derivatives (transmission and secant derivatives)
        // Start with transmission deriv
        d_minus.deriv = transmission.deriv * d_minus.value;

        // Start with secant derivative
        d_minus.deriv +=
            average_secant.deriv * transmission.value *
            (-d_minus.value / denom + exp(-x * average_secant.value) * x);

        // Dense derivatives are done, now we have layer derivatives
        for (int k = 0; k < thickness.deriv.size(); ++k) {
            // Eigenvalue derivatives
            d_minus.deriv(k + layerderivstart) +=
                eigval.deriv(k, solution_index) * transmission.value *
                (-x * exp(-x * eigval.value(solution_index)) +
                 d_minus.value / denom);

            // Thickness derivatives, x = fraction * thickness => dx = fraction
            // * dthickness
            d_minus.deriv(k + layerderivstart) +=
                layer_relative_location * thickness.deriv(k) *
                transmission.value *
                (exp(-x * average_secant.value) * average_secant.value -
                 exp(-x * eigval.value(solution_index)) *
                     eigval.value(solution_index));
        }

        // All value factors are missing transmission / denom
        d_minus.value *= transmission.value / denom;

        // Derivatives are just missing 1/denom
        d_minus.deriv *= 1 / denom;
    }

    /** Calculates the green's function solution multipier, d_plus, sampled at a
     * relative location layer_fraction within the layer
     *
     * @param thickness
     * @param eigval
     * @param solution_index
     * @param layer_relative_location
     * @param transmission
     * @param average_secant
     * @param layerderivstart
     * @param d_plus
     */
    template <int CNSTR = -1>
    inline void
    d_plus_sampled(const sasktran_disco::LayerDual<double>& thickness,
                   const sasktran_disco::VectorLayerDual<double, CNSTR>& eigval,
                   sasktran_disco::SolutionIndex solution_index,
                   double layer_relative_location,
                   const sasktran_disco::Dual<double>& transmission,
                   const sasktran_disco::Dual<double>& average_secant,
                   int layerderivstart, sasktran_disco::Dual<double>& d_plus) {
        // Convenience quantities
        double x = thickness.value * layer_relative_location;
        double denom = (eigval.value(solution_index) + average_secant.value);
        double expfactor2 =
            exp(-thickness.value * average_secant.value) *
            exp(-(thickness.value - x) * eigval.value(solution_index));

        d_plus.value = (exp(-x * average_secant.value) - expfactor2);

        // Derivative time, start with transmission
        d_plus.deriv = transmission.deriv * d_plus.value;

        // The only other dense derivative is from average_secant
        d_plus.deriv +=
            average_secant.deriv * transmission.value *
            (-d_plus.value / denom + -x * exp(-x * average_secant.value) +
             thickness.value * expfactor2);

        // Now we need our layer derivatives from eigval/thickness
        for (int k = 0; k < thickness.deriv.size(); ++k) {
            // Eigenvalue derivatives
            d_plus.deriv(k + layerderivstart) +=
                eigval.deriv(k, solution_index) * transmission.value *
                (-d_plus.value / denom + expfactor2 * (thickness.value - x));

            // Thickness derivatives
            d_plus.deriv(k + layerderivstart) +=
                thickness.deriv(k) * transmission.value *
                (-exp(-x * average_secant.value) * layer_relative_location *
                     average_secant.value +
                 expfactor2 * average_secant.value +
                 expfactor2 *
                     (eigval.value(solution_index) -
                      layer_relative_location * eigval.value(solution_index)));
        }

        d_plus.value *= transmission.value / denom;
        d_plus.deriv *= 1 / denom;
    }
} // namespace sasktran_disco::postprocessing
