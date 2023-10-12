#pragma once

#include <sasktran2/internal_common.h>

namespace sasktran2::math::unitsphere::lebedev {
    static double g_lebedev_xyzw_146[4 * 146] = {
        1.0, 0.0, 6.123233995736766e-17, 0.000599631368862,
        -1.0, 1.2246467991473532e-16, 6.123233995736766e-17, 0.000599631368862,
        6.123233995736766e-17, 1.0, 6.123233995736766e-17, 0.000599631368862,
        6.123233995736766e-17, -1.0, 6.123233995736766e-17, 0.000599631368862,
        0.0, 0.0, 1.0, 0.000599631368862,
        7.498798913309288e-33, 1.2246467991473532e-16, -1.0, 0.000599631368862,
        4.329780281177466e-17, 0.7071067811865475, 0.7071067811865476, 0.007372999718621,
        4.329780281177467e-17, 0.7071067811865476, -0.7071067811865475, 0.007372999718621,
        4.329780281177466e-17, -0.7071067811865475, 0.7071067811865476, 0.007372999718621,
        4.329780281177467e-17, -0.7071067811865476, -0.7071067811865475, 0.007372999718621,
        0.7071067811865475, 0.0, 0.7071067811865476, 0.007372999718621,
        0.7071067811865476, 0.0, -0.7071067811865475, 0.007372999718621,
        -0.7071067811865475, 8.659560562354932e-17, 0.7071067811865476, 0.007372999718621,
        -0.7071067811865476, 8.659560562354934e-17, -0.7071067811865475, 0.007372999718621,
        0.7071067811865476, 0.7071067811865475, 6.123233995736766e-17, 0.007372999718621,
        0.7071067811865476, -0.7071067811865475, 6.123233995736766e-17, 0.007372999718621,
        -0.7071067811865475, 0.7071067811865476, 6.123233995736766e-17, 0.007372999718621,
        -0.7071067811865475, -0.7071067811865476, 6.123233995736766e-17, 0.007372999718621,
        0.5773502691896258, 0.5773502691896257, 0.5773502691896257, 0.007210515360144,
        0.5773502691896258, 0.5773502691896257, -0.5773502691896257, 0.007210515360144,
        0.5773502691896258, -0.5773502691896257, 0.5773502691896257, 0.007210515360144,
        0.5773502691896258, -0.5773502691896257, -0.5773502691896257, 0.007210515360144,
        -0.5773502691896257, 0.5773502691896258, 0.5773502691896257, 0.007210515360144,
        -0.5773502691896257, 0.5773502691896258, -0.5773502691896257, 0.007210515360144,
        -0.5773502691896257, -0.5773502691896258, 0.5773502691896257, 0.007210515360144,
        -0.5773502691896257, -0.5773502691896258, -0.5773502691896257, 0.007210515360144,
        0.6764410400114264, 0.6764410400114262, 0.2912988822095269, 0.007116355493118,
        0.6764410400114264, 0.6764410400114262, -0.29129888220952677, 0.007116355493118,
        0.6764410400114264, -0.6764410400114262, 0.2912988822095269, 0.007116355493118,
        0.6764410400114264, -0.6764410400114262, -0.29129888220952677, 0.007116355493118,
        -0.6764410400114262, 0.6764410400114264, 0.2912988822095269, 0.007116355493118,
        -0.6764410400114262, 0.6764410400114264, -0.29129888220952677, 0.007116355493118,
        -0.6764410400114262, -0.6764410400114264, 0.2912988822095269, 0.007116355493118,
        -0.6764410400114262, -0.6764410400114264, -0.29129888220952677, 0.007116355493118,
        0.6764410400114264, 0.29129888220952677, 0.6764410400114264, 0.007116355493118,
        0.6764410400114264, -0.29129888220952677, 0.6764410400114264, 0.007116355493118,
        0.6764410400114265, 0.2912988822095268, -0.6764410400114262, 0.007116355493118,
        0.6764410400114265, -0.2912988822095268, -0.6764410400114262, 0.007116355493118,
        -0.6764410400114266, 0.2912988822095263, 0.6764410400114264, 0.007116355493118,
        -0.6764410400114266, -0.2912988822095263, 0.6764410400114264, 0.007116355493118,
        -0.6764410400114267, 0.2912988822095264, -0.6764410400114262, 0.007116355493118,
        -0.6764410400114267, -0.2912988822095264, -0.6764410400114262, 0.007116355493118,
        0.2912988822095267, 0.6764410400114264, 0.6764410400114264, 0.007116355493118,
        -0.291298882209527, 0.6764410400114264, 0.6764410400114264, 0.007116355493118,
        0.29129888220952677, 0.6764410400114265, -0.6764410400114262, 0.007116355493118,
        -0.29129888220952704, 0.6764410400114264, -0.6764410400114262, 0.007116355493118,
        0.2912988822095267, -0.6764410400114264, 0.6764410400114264, 0.007116355493118,
        -0.291298882209527, -0.6764410400114264, 0.6764410400114264, 0.007116355493118,
        0.29129888220952677, -0.6764410400114265, -0.6764410400114262, 0.007116355493118,
        -0.29129888220952704, -0.6764410400114264, -0.6764410400114262, 0.007116355493118,
        0.41749612279654535, 0.4174961227965453, 0.8070898183595825, 0.006753829486314,
        0.4174961227965453, 0.41749612279654524, -0.8070898183595825, 0.006753829486314,
        0.41749612279654535, -0.4174961227965453, 0.8070898183595825, 0.006753829486314,
        0.4174961227965453, -0.41749612279654524, -0.8070898183595825, 0.006753829486314,
        -0.4174961227965453, 0.41749612279654535, 0.8070898183595825, 0.006753829486314,
        -0.41749612279654524, 0.4174961227965453, -0.8070898183595825, 0.006753829486314,
        -0.4174961227965453, -0.41749612279654535, 0.8070898183595825, 0.006753829486314,
        -0.41749612279654524, -0.4174961227965453, -0.8070898183595825, 0.006753829486314,
        0.41749612279654535, 0.8070898183595825, 0.4174961227965453, 0.006753829486314,
        0.41749612279654535, -0.8070898183595825, 0.4174961227965453, 0.006753829486314,
        0.41749612279654535, 0.8070898183595825, -0.4174961227965452, 0.006753829486314,
        0.41749612279654535, -0.8070898183595825, -0.4174961227965452, 0.006753829486314,
        -0.41749612279654524, 0.8070898183595826, 0.4174961227965453, 0.006753829486314,
        -0.41749612279654524, -0.8070898183595826, 0.4174961227965453, 0.006753829486314,
        -0.41749612279654524, 0.8070898183595826, -0.4174961227965452, 0.006753829486314,
        -0.41749612279654524, -0.8070898183595826, -0.4174961227965452, 0.006753829486314,
        0.8070898183595826, 0.4174961227965453, 0.4174961227965453, 0.006753829486314,
        -0.8070898183595825, 0.4174961227965454, 0.4174961227965453, 0.006753829486314,
        0.8070898183595826, 0.4174961227965453, -0.4174961227965452, 0.006753829486314,
        -0.8070898183595825, 0.4174961227965454, -0.4174961227965452, 0.006753829486314,
        0.8070898183595826, -0.4174961227965453, 0.4174961227965453, 0.006753829486314,
        -0.8070898183595825, -0.4174961227965454, 0.4174961227965453, 0.006753829486314,
        0.8070898183595826, -0.4174961227965453, -0.4174961227965452, 0.006753829486314,
        -0.8070898183595825, -0.4174961227965454, -0.4174961227965452, 0.006753829486314,
        0.15746766720390828, 0.15746766720390826, 0.9748886436771732, 0.007574394159054,
        0.15746766720390826, 0.15746766720390823, -0.9748886436771732, 0.007574394159054,
        0.15746766720390828, -0.15746766720390826, 0.9748886436771732, 0.007574394159054,
        0.15746766720390826, -0.15746766720390823, -0.9748886436771732, 0.007574394159054,
        -0.15746766720390826, 0.15746766720390828, 0.9748886436771732, 0.007574394159054,
        -0.15746766720390823, 0.15746766720390826, -0.9748886436771732, 0.007574394159054,
        -0.15746766720390826, -0.15746766720390828, 0.9748886436771732, 0.007574394159054,
        -0.15746766720390823, -0.15746766720390826, -0.9748886436771732, 0.007574394159054,
        0.15746766720390817, 0.9748886436771732, 0.1574676672039083, 0.007574394159054,
        0.15746766720390817, -0.9748886436771732, 0.1574676672039083, 0.007574394159054,
        0.15746766720390817, 0.9748886436771732, -0.15746766720390817, 0.007574394159054,
        0.15746766720390817, -0.9748886436771732, -0.15746766720390817, 0.007574394159054,
        -0.15746766720390828, 0.9748886436771732, 0.1574676672039083, 0.007574394159054,
        -0.15746766720390828, -0.9748886436771732, 0.1574676672039083, 0.007574394159054,
        -0.15746766720390828, 0.9748886436771732, -0.15746766720390817, 0.007574394159054,
        -0.15746766720390828, -0.9748886436771732, -0.15746766720390817, 0.007574394159054,
        0.9748886436771732, 0.15746766720390815, 0.1574676672039083, 0.007574394159054,
        -0.9748886436771732, 0.15746766720390803, 0.1574676672039083, 0.007574394159054,
        0.9748886436771732, 0.15746766720390815, -0.15746766720390817, 0.007574394159054,
        -0.9748886436771732, 0.15746766720390803, -0.15746766720390817, 0.007574394159054,
        0.9748886436771732, -0.15746766720390815, 0.1574676672039083, 0.007574394159054,
        -0.9748886436771732, -0.15746766720390803, 0.1574676672039083, 0.007574394159054,
        0.9748886436771732, -0.15746766720390815, -0.15746766720390817, 0.007574394159054,
        -0.9748886436771732, -0.15746766720390803, -0.15746766720390817, 0.007574394159054,
        0.14035538117131835, 0.4493328323269557, 0.8822700112603227, 0.006991087353303,
        0.1403553811713183, 0.4493328323269555, -0.8822700112603228, 0.006991087353303,
        0.14035538117131835, -0.4493328323269557, 0.8822700112603227, 0.006991087353303,
        0.1403553811713183, -0.4493328323269555, -0.8822700112603228, 0.006991087353303,
        -0.14035538117131827, 0.44933283232695576, 0.8822700112603227, 0.006991087353303,
        -0.1403553811713182, 0.44933283232695553, -0.8822700112603228, 0.006991087353303,
        -0.14035538117131827, -0.44933283232695576, 0.8822700112603227, 0.006991087353303,
        -0.1403553811713182, -0.44933283232695553, -0.8822700112603228, 0.006991087353303,
        0.14035538117131813, 0.8822700112603228, 0.44933283232695564, 0.006991087353303,
        0.14035538117131813, 0.8822700112603228, -0.44933283232695553, 0.006991087353303,
        0.14035538117131813, -0.8822700112603228, 0.44933283232695564, 0.006991087353303,
        0.14035538117131813, -0.8822700112603228, -0.44933283232695553, 0.006991087353303,
        -0.14035538117131824, 0.8822700112603228, 0.44933283232695564, 0.006991087353303,
        -0.14035538117131824, 0.8822700112603228, -0.44933283232695553, 0.006991087353303,
        -0.14035538117131824, -0.8822700112603228, 0.44933283232695564, 0.006991087353303,
        -0.14035538117131824, -0.8822700112603228, -0.44933283232695553, 0.006991087353303,
        0.4493328323269557, 0.14035538117131838, 0.8822700112603227, 0.006991087353303,
        0.4493328323269555, 0.14035538117131832, -0.8822700112603228, 0.006991087353303,
        0.4493328323269557, -0.14035538117131838, 0.8822700112603227, 0.006991087353303,
        0.4493328323269555, -0.14035538117131832, -0.8822700112603228, 0.006991087353303,
        -0.44933283232695564, 0.14035538117131846, 0.8822700112603227, 0.006991087353303,
        -0.4493328323269554, 0.14035538117131838, -0.8822700112603228, 0.006991087353303,
        -0.44933283232695564, -0.14035538117131846, 0.8822700112603227, 0.006991087353303,
        -0.4493328323269554, -0.14035538117131838, -0.8822700112603228, 0.006991087353303,
        0.44933283232695564, 0.8822700112603227, 0.14035538117131818, 0.006991087353303,
        0.44933283232695564, 0.8822700112603227, -0.1403553811713183, 0.006991087353303,
        0.44933283232695564, -0.8822700112603227, 0.14035538117131818, 0.006991087353303,
        0.44933283232695564, -0.8822700112603227, -0.1403553811713183, 0.006991087353303,
        -0.44933283232695553, 0.8822700112603228, 0.14035538117131818, 0.006991087353303,
        -0.44933283232695553, 0.8822700112603228, -0.1403553811713183, 0.006991087353303,
        -0.44933283232695553, -0.8822700112603228, 0.14035538117131818, 0.006991087353303,
        -0.44933283232695553, -0.8822700112603228, -0.1403553811713183, 0.006991087353303,
        0.8822700112603227, 0.1403553811713186, 0.44933283232695564, 0.006991087353303,
        0.8822700112603227, 0.1403553811713186, -0.44933283232695553, 0.006991087353303,
        0.8822700112603227, -0.1403553811713186, 0.44933283232695564, 0.006991087353303,
        0.8822700112603227, -0.1403553811713186, -0.44933283232695553, 0.006991087353303,
        -0.8822700112603227, 0.14035538117131877, 0.44933283232695564, 0.006991087353303,
        -0.8822700112603227, 0.14035538117131877, -0.44933283232695553, 0.006991087353303,
        -0.8822700112603227, -0.14035538117131877, 0.44933283232695564, 0.006991087353303,
        -0.8822700112603227, -0.14035538117131877, -0.44933283232695553, 0.006991087353303,
        0.8822700112603227, 0.4493328323269557, 0.14035538117131818, 0.006991087353303,
        0.8822700112603227, 0.4493328323269557, -0.1403553811713183, 0.006991087353303,
        0.8822700112603227, -0.4493328323269557, 0.14035538117131818, 0.006991087353303,
        0.8822700112603227, -0.4493328323269557, -0.1403553811713183, 0.006991087353303,
        -0.8822700112603227, 0.44933283232695564, 0.14035538117131818, 0.006991087353303,
        -0.8822700112603227, 0.44933283232695564, -0.1403553811713183, 0.006991087353303,
        -0.8822700112603227, -0.44933283232695564, 0.14035538117131818, 0.006991087353303,
        -0.8822700112603227, -0.44933283232695564, -0.1403553811713183, 0.006991087353303
    };
}