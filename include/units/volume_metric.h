/**
 * @file volume_metric.h
 * @brief Functions for converting between metric volume units
 *
 * @date 18-12-2025
 */

#ifndef MATHIX_VOLUME_METRIC_H
#define MATHIX_VOLUME_METRIC_H

#include "../float_t.h"

/*
 * @brief Converts volume from liters to milliliters
 *
 * @param Volume in liters
 * @return Volume in milliliters
 */
float64_t convert_l_to_ml(float64_t l);

/*
 * @brief Converts volume from liters to cubic decimeters
 *
 * @param Volume in liters
 * @return Volume in cubic decimeters
 */
float64_t convert_l_to_dm3(float64_t l);

/*
 * @brief Converts volume from cubic decimeters to milliliters
 *
 * @param Volume in cubic decimeters
 * @return Volume in milliliters
 */
float64_t convert_dm3_to_ml(float64_t dm3);

/*
 * @brief Converts volume from cubic decimeters to liters
 *
 * @param Volume in cubic decimeters
 * @return Volume in liters
 */
float64_t convert_dm3_to_l(float64_t dm3);

#endif //MATHIX_VOLUME_METRIC_H