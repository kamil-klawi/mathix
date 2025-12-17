/**
 * @file length_metric.h
 * @brief Functions for converting between metric length units
 *
 * @date 17-12-2025
 */

#ifndef MATHIX_LENGTH_METRIC_H
#define MATHIX_LENGTH_METRIC_H

#include "../float_t.h"

/*
 * @brief Converts length from millimetres to metres
 *
 * @param Length in millimetres
 * @return Length in metres
 */
float64_t convert_mm_to_m(float64_t millimetres);

/*
 * @brief Converts length from metres to millimetres
 *
 * @param Length in metres
 * @return Length in millimetres
 */
float64_t convert_m_to_mm(float64_t metres);

/*
 * @brief Converts length from centimetres to metres
 *
 * @param Length in centimetres
 * @return Length in metres
 */
float64_t convert_cm_to_m(float64_t centimetres);

/*
 * @brief Converts length from metres to centimetres
 *
 * @param Length in metres
 * @return Length in centimetres
 */
float64_t convert_m_to_cm(float64_t metres);

/*
 * @brief Converts length from kilometres to metres
 *
 * @param Length in kilometres
 * @return Length in metres
 */
float64_t convert_km_to_m(float64_t kilometres);

/*
 * @brief Converts length from metres to kilometres
 *
 * @param Length in metres
 * @return Length in kilometres
 */
float64_t convert_m_to_km(float64_t metres);

#endif //MATHIX_LENGTH_METRIC_H