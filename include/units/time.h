/**
 * @file time.h
 * @brief Functions for converting between time units
 *
 * @date 17-12-2025
 */

#ifndef MATHIX_TIME_H
#define MATHIX_TIME_H

#include "../float_t.h"

/*
 * @brief Converts time from nanoseconds to microseconds
 *
 * @param Time in nanoseconds
 * @return Time in microseconds
 */
float64_t convert_ns_to_us(float64_t ns);

/*
 * @brief Converts time from nanoseconds to milliseconds
 *
 * @param Time in nanoseconds
 * @return Time in milliseconds
 */
float64_t convert_ns_to_ms(float64_t ns);

/*
 * @brief Converts time from nanoseconds to seconds
 *
 * @param Time in nanoseconds
 * @return Time in seconds
 */
float64_t convert_ns_to_s(float64_t ns);

/*
 * @brief Converts time from nanoseconds to minutes
 *
 * @param Time in nanoseconds
 * @return Time in minutes
 */
float64_t convert_ns_to_min(float64_t ns);

/*
 * @brief Converts time from nanoseconds to hours
 *
 * @param Time in nanoseconds
 * @return Time in hours
 */
float64_t convert_ns_to_h(float64_t ns);

/*
 * @brief Converts time from microseconds to nanoseconds
 *
 * @param Time in microseconds
 * @return Time in nanoseconds
 */
float64_t convert_us_to_ns(float64_t us);

/*
 * @brief Converts time from microseconds to milliseconds
 *
 * @param Time in microseconds
 * @return Time in milliseconds
 */
float64_t convert_us_to_ms(float64_t us);

/*
 * @brief Converts time from microseconds to seconds
 *
 * @param Time in microseconds
 * @return Time in seconds
 */
float64_t convert_us_to_s(float64_t us);

/*
 * @brief Converts time from microseconds to minutes
 *
 * @param Time in microseconds
 * @return Time in minutes
 */
float64_t convert_us_to_min(float64_t us);

/*
 * @brief Converts time from microseconds to hours
 *
 * @param Time in microseconds
 * @return Time in hours
 */
float64_t convert_us_to_h(float64_t us);

/*
 * @brief Converts time from milliseconds to nanoseconds
 *
 * @param Time in milliseconds
 * @return Time in nanoseconds
 */
float64_t convert_ms_to_ns(float64_t ms);

/*
 * @brief Converts time from milliseconds to microseconds
 *
 * @param Time in milliseconds
 * @return Time in microseconds
 */
float64_t convert_ms_to_us(float64_t ms);

/*
 * @brief Converts time from milliseconds to seconds
 *
 * @param Time in milliseconds
 * @return Time in seconds
 */
float64_t convert_ms_to_s(float64_t ms);

/*
 * @brief Converts time from milliseconds to minutes
 *
 * @param Time in milliseconds
 * @return Time in minutes
 */
float64_t convert_ms_to_min(float64_t ms);

/*
 * @brief Converts time from milliseconds to hours
 *
 * @param Time in milliseconds
 * @return Time in hours
 */
float64_t convert_ms_to_h(float64_t ms);

/*
 * @brief Converts time from seconds to nanoseconds
 *
 * @param Time in seconds
 * @return Time in nanoseconds
 */
float64_t convert_s_to_ns(float64_t s);

/*
 * @brief Converts time from seconds to microseconds
 *
 * @param Time in seconds
 * @return Time in microseconds
 */
float64_t convert_s_to_us(float64_t s);

/*
 * @brief Converts time from seconds to milliseconds
 *
 * @param Time in seconds
 * @return Time in milliseconds
 */
float64_t convert_s_to_ms(float64_t s);

/*
 * @brief Converts time from seconds to minutes
 *
 * @param Time in seconds
 * @return Time in minutes
 */
float64_t convert_s_to_min(float64_t s);

/*
 * @brief Converts time from seconds to hours
 *
 * @param Time in seconds
 * @return Time in hours
 */
float64_t convert_s_to_h(float64_t s);

/*
 * @brief Converts time from minutes to nanoseconds
 *
 * @param Time in minutes
 * @return Time in nanoseconds
 */
float64_t convert_min_to_ns(float64_t min);

/*
 * @brief Converts time from minutes to microseconds
 *
 * @param Time in minutes
 * @return Time in microseconds
 */
float64_t convert_min_to_us(float64_t min);

/*
 * @brief Converts time from minutes to milliseconds
 *
 * @param Time in minutes
 * @return Time in milliseconds
 */
float64_t convert_min_to_ms(float64_t min);

/*
 * @brief Converts time from minutes to seconds
 *
 * @param Time in minutes
 * @return Time in seconds
 */
float64_t convert_min_to_s(float64_t min);

/*
 * @brief Converts time from minutes to hours
 *
 * @param Time in minutes
 * @return Time in hours
 */
float64_t convert_min_to_h(float64_t min);

/*
 * @brief Converts time from hours to nanoseconds
 *
 * @param Time in hours
 * @return Time in nanoseconds
 */
float64_t convert_h_to_ns(float64_t h);

/*
 * @brief Converts time from hours to microseconds
 *
 * @param Time in hours
 * @return Time in microseconds
 */
float64_t convert_h_to_us(float64_t h);

/*
 * @brief Converts time from hours to milliseconds
 *
 * @param Time in hours
 * @return Time in milliseconds
 */
float64_t convert_h_to_ms(float64_t h);

/*
 * @brief Converts time from hours to seconds
 *
 * @param Time in hours
 * @return Time in seconds
 */
float64_t convert_h_to_s(float64_t h);

/*
 * @brief Converts time from hours to minutes
 *
 * @param Time in hours
 * @return Time in minutes
 */
float64_t convert_h_to_min(float64_t h);


#endif //MATHIX_TIME_H