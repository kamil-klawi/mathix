/**
 * @file volume_imperial.h
 * @brief Functions for converting between imperial volume units
 *
 * @date 18-12-2025
 */

#ifndef MATHIX_VOLUME_IMPERIAL_H
#define MATHIX_VOLUME_IMPERIAL_H

#include "../float_t.h"

/*
 * @brief Converts volume from fluid ounce to pint
 *
 * @param Volume in fluid ounce
 * @return Volume in pint
 */
float64_t convert_fl_oz_to_pt(float64_t fl_oz);

/*
 * @brief Converts volume from fluid ounce to quart
 *
 * @param Volume in fluid ounce
 * @return Volume in quart
 */
float64_t convert_fl_oz_to_qt(float64_t fl_oz);

/*
 * @brief Converts volume from fluid ounce to gallon
 *
 * @param Volume in fluid ounce
 * @return Volume in gallon
 */
float64_t convert_fl_oz_to_gal(float64_t fl_oz);

/*
 * @brief Converts volume from pint to fluid ounce
 *
 * @param Volume in pint
 * @return Volume in fluid ounce
 */
float64_t convert_pt_to_fl_oz(float64_t pt);

/*
 * @brief Converts volume from pint to quart
 *
 * @param Volume in pint
 * @return Volume in quart
 */
float64_t convert_pt_to_qt(float64_t pt);

/*
 * @brief Converts volume from pint to gallon
 *
 * @param Volume in pint
 * @return Volume in gallon
 */
float64_t convert_pt_to_gal(float64_t pt);

/*
 * @brief Converts volume from quart to fluid ounce
 *
 * @param Volume in quart
 * @return Volume in fluid ounce
 */
float64_t convert_qt_to_fl_oz(float64_t qt);

/*
 * @brief Converts volume from quart to pint
 *
 * @param Volume in quart
 * @return Volume in pint
 */
float64_t convert_qt_to_pt(float64_t qt);

/*
 * @brief Converts volume from quart to gallon
 *
 * @param Volume in quart
 * @return Volume in gallon
 */
float64_t convert_qt_to_gal(float64_t qt);

/*
 * @brief Converts volume from gallon to fluid ounce
 *
 * @param Volume in gallon
 * @return Volume in fluid ounce
 */
float64_t convert_gal_to_fl_oz(float64_t gal);

/*
 * @brief Converts volume from gallon to pint
 *
 * @param Volume in gallon
 * @return Volume in pint
 */
float64_t convert_gal_to_pt(float64_t gal);

/*
 * @brief Converts volume from gallon to quart
 *
 * @param Volume in gallon
 * @return Volume in quart
 */
float64_t convert_gal_to_qt(float64_t gal);

#endif //MATHIX_VOLUME_IMPERIAL_H