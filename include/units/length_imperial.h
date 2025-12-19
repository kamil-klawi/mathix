/**
 * @file length_imperial.h
 * @brief Functions for converting between imperial length units
 *
 * @date 17-12-2025
 */

#ifndef MATHIX_LENGTH_IMPERIAL_H
#define MATHIX_LENGTH_IMPERIAL_H

#include "../float_t.h"

/*
 * @brief Converts length from inches to feat
 *
 * @param Length in inches
 * @return Length in feat
 */
float64_t convert_inch_to_ft(float64_t inch);

/*
 * @brief Converts length from feat to inches
 *
 * @param Length in feat
 * @return Length in inches
 */
float64_t convert_ft_to_inch(float64_t ft);

/*
 * @brief Converts length from yards to feat
 *
 * @param Length in yards
 * @return Length in feat
 */
float64_t convert_yd_to_ft(float64_t yd);

/*
 * @brief Converts length from feat to yards
 *
 * @param Length in feat
 * @return Length in yards
 */
float64_t convert_ft_to_yd(float64_t ft);

/*
 * @brief Converts length from miles to yards
 *
 * @param Length in miles
 * @return Length in yards
 */
float64_t convert_mile_to_yd(float64_t mile);

/*
 * @brief Converts length from yards to miles
 *
 * @param Length in yards
 * @return Length in miles
 */
float64_t convert_yd_to_mile(float64_t yd);

/*
 * @brief Converts length from furlongs to yards
 *
 * @param Length in furlongs
 * @return Length in yards
 */
float64_t convert_fur_to_yd(float64_t fur);

/*
 * @brief Converts length from yards to furlongs
 *
 * @param Length in yards
 * @return Length in furlongs
 */
float64_t convert_yd_to_fur(float64_t yd);

/*
 * @brief Converts length from miles to furlongs
 *
 * @param Length in miles
 * @return Length in furlongs
 */
float64_t convert_mile_to_fur(float64_t mile);

/*
 * @brief Converts length from furlongs to miles
 *
 * @param Length in furlongs
 * @return Length in miles
 */
float64_t convert_fur_to_mile(float64_t fur);

#endif //MATHIX_LENGTH_IMPERIAL_H