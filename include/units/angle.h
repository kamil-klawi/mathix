/**
 * @file angle.h
 * @brief Functions for converting angles between degrees, gradians and radians
 *
 * @date 17-12-2025
 */

#ifndef MATHIX_ANGLE_H
#define MATHIX_ANGLE_H

#include "../float_t.h"

/*
 * @brief Converts an angle from degrees to radians
 *
 * @param Angle value in degrees
 * @return Angle value in radians
 */
float64_t convert_degrees_to_radians(float64_t deg);

/*
 * @brief Converts an angle from radians to degrees
 *
 * @param Angle value in radians
 * @return Angle value in degrees
 */
float64_t convert_radians_to_degrees(float64_t rad);

/*
 * @brief Converts an angle from gradians to radians
 *
 * @param Angle value in gradians
 * @return Angle value in radians
 */
float64_t convert_gradians_to_radians(float64_t grad);

/*
 * @brief Converts an angle from radians to gradians
 *
 * @param Angle value in radians
 * @return Angle value in gradians
 */
float64_t convert_radians_to_gradians(float64_t rad);

#endif //MATHIX_ANGLE_H