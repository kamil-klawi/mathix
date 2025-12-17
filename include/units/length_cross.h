/**
 * @file length_cross.h
 * @brief Functions for converting between imperial and metric length units
 *
 * @date 17-12-2025
 */

#ifndef MATHIX_LENGTH_CROSS_H
#define MATHIX_LENGTH_CROSS_H

#include "../float_t.h"

/*
 * @brief Converts length from inches to centimetres
 *
 * @param Length in inches
 * @return Length in centimetres
 */
float64_t convert_inch_to_cm(float64_t inch);

/*
 * @brief Converts length from centimetres to inches
 *
 * @param Length in centimetres
 * @return Length in inches
 */
float64_t convert_cm_to_inch(float64_t cm);

/*
 * @brief Converts length from feat to metres
 *
 * @param Length in feat
 * @return Length in metres
 */
float64_t convert_ft_to_m(float64_t ft);

/*
 * @brief Converts length from metres to feat
 *
 * @param Length in metres
 * @return Length in feat
 */
float64_t convert_m_to_ft(float64_t m);

/*
 * @brief Converts length from yards to metres
 *
 * @param Length in yards
 * @return Length in metres
 */
float64_t convert_yd_to_m(float64_t yd);

/*
 * @brief Converts length from metres to yards
 *
 * @param Length in metres
 * @return Length in yards
 */
float64_t convert_m_to_yd(float64_t m);

/*
 * @brief Converts length from miles to metres
 *
 * @param Length in miles
 * @return Length in metres
 */
float64_t convert_mile_to_m(float64_t mile);

/*
 * @brief Converts length from metres to miles
 *
 * @param Length in metres
 * @return Length in miles
 */
float64_t convert_m_to_mile(float64_t m);

/*
 * @brief Converts length from miles to kilometres
 *
 * @param Length in miles
 * @return Length in kilometres
 */
float64_t convert_mile_to_km(float64_t mile);

/*
 * @brief Converts length from kilometres to miles
 *
 * @param Length in kilometres
 * @return Length in miles
 */
float64_t convert_km_to_mile(float64_t km);

/*
 * @brief Converts length from acre to square metres
 *
 * @param Length in acre
 * @return Length in square metres
 */
float64_t convert_acre_to_m2(float64_t acre);

/*
 * @brief Converts length from square metres to acre
 *
 * @param Length in square metres
 * @return Length in acre
 */
float64_t convert_m2_to_acre(float64_t m2);

#endif //MATHIX_LENGTH_CROSS_H