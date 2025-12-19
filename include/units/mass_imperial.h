/**
 * @file mass_imperial.h
 * @brief Functions for converting between imperial mass units
 *
 * @date 18-12-2025
 */

#ifndef MATHIX_MASS_IMPERIAL_H
#define MATHIX_MASS_IMPERIAL_H

#include "../float_t.h"

/*
 * @brief Converts mass from grains to ounces
 *
 * @param Mass in grains
 * @return Mass in ounces
 */
float64_t convert_gr_to_oz(float64_t gr);

/*
 * @brief Converts mass from grains to pounds
 *
 * @param Mass in grains
 * @return Mass in pounds
 */
float64_t convert_gr_to_lb(float64_t gr);

/*
 * @brief Converts mass from ounces to grains
 *
 * @param Mass in ounces
 * @return Mass in grains
 */
float64_t convert_oz_to_gr(float64_t oz);

/*
 * @brief Converts mass from ounces to pounds
 *
 * @param Mass in ounces
 * @return Mass in pounds
 */
float64_t convert_oz_to_lb(float64_t oz);

/*
 * @brief Converts mass from pounds to grains
 *
 * @param Mass in pounds
 * @return Mass in grains
 */
float64_t convert_lb_to_gr(float64_t lb);

/*
 * @brief Converts mass from pounds to ounces
 *
 * @param Mass in pounds
 * @return Mass in ounces
 */
float64_t convert_lb_to_oz(float64_t lb);

#endif //MATHIX_MASS_IMPERIAL_H