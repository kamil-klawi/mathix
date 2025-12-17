/**
 * @file temperature.h
 * @brief Functions for converting between common temperature scales
 *
 * @date 17-12-2025
 */

#ifndef MATHIX_TEMPERATURE_H
#define MATHIX_TEMPERATURE_H

#include "../float_t.h"

/*
 * @brief Converts temperature from Celsius to Fahrenheit
 *
 * @param Temperature in Celsius
 * @return Temperature in Fahrenheit
 */
float64_t convert_celsius_to_fahrenheit(float64_t deg);

/*
 * @brief Converts temperature from Celsius to Kelvin
 *
 * @param Temperature in Celsius
 * @return Temperature in Kelvin
 */
float64_t convert_celsius_to_kelvin(float64_t deg);

/*
 * @brief Converts temperature from Fahrenheit to Celsius
 *
 * @param Temperature in Fahrenheit
 * @return Temperature in Celsius
 */
float64_t convert_fahrenheit_to_celsius(float64_t deg);

/*
 * @brief Converts temperature from Fahrenheit to Kelvin
 *
 * @param Temperature in Fahrenheit
 * @return Temperature in Kelvin
 */
float64_t convert_fahrenheit_to_kelvin(float64_t deg);

/*
 * @brief Converts temperature from Kelvin to Celsius
 *
 * @param Temperature in Kelvin
 * @return Temperature in Celsius
 */
float64_t convert_kelvin_to_celsius(float64_t deg);

/*
 * @brief Converts temperature from Kelvin to Fahrenheit
 *
 * @param Temperature in Kelvin
 * @return Temperature in Fahrenheit
 */
float64_t convert_kelvin_to_fahrenheit(float64_t deg);

#endif //MATHIX_TEMPERATURE_H