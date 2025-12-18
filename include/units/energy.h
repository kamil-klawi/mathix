/**
 * @file energy.h
 * @brief Functions for converting between energy units
 *
 * @date 18-12-2025
 */

#ifndef MATHIX_ENERGY_H
#define MATHIX_ENERGY_H

#include "../float_t.h"

/*
 * @brief Converts energy from joules to calories
 *
 * @param Energy in joules
 * @return Energy in calories
 */
float64_t convert_j_to_cal(float64_t j);

/*
 * @brief Converts energy from calories to joules
 *
 * @param Energy in calories
 * @return Energy in joules
 */
float64_t convert_cal_to_j(float64_t cal);

/*
 * @brief Converts energy from calories to kilocalories
 *
 * @param Energy in calories
 * @return Energy in kilocalories
 */
float64_t convert_cal_to_kcal(float64_t cal);

/*
 * @brief Converts energy from kilocalories to calories
 *
 * @param Energy in kilocalories
 * @return Energy in calories
 */
float64_t convert_kcal_to_cal(float64_t kcal);

/*
 * @brief Converts energy from joules to kilojoules
 *
 * @param Energy in joules
 * @return Energy in kilojoules
 */
float64_t convert_j_to_kj(float64_t j);

/*
 * @brief Converts energy from joules to megajoules
 *
 * @param Energy in joules
 * @return Energy in megajoules
 */
float64_t convert_j_to_mj(float64_t j);

/*
 * @brief Converts energy from joules to gigajoules
 *
 * @param Energy in joules
 * @return Energy in gigajoules
 */
float64_t convert_j_to_gj(float64_t j);

/*
 * @brief Converts energy from kilojoules to joules
 *
 * @param Energy in kilojoules
 * @return Energy in joules
 */
float64_t convert_kj_to_j(float64_t kj);

/*
 * @brief Converts energy from kilojoules to megajoules
 *
 * @param Energy in kilojoules
 * @return Energy in megajoules
 */
float64_t convert_kj_to_mj(float64_t kj);

/*
 * @brief Converts energy from kilojoules to gigajoules
 *
 * @param Energy in kilojoules
 * @return Energy in gigajoules
 */
float64_t convert_kj_to_gj(float64_t kj);

/*
 * @brief Converts energy from megajoules to joules
 *
 * @param Energy in megajoules
 * @return Energy in joules
 */
float64_t convert_mj_to_j(float64_t mj);

/*
 * @brief Converts energy from megajoules to kilojoules
 *
 * @param Energy in megajoules
 * @return Energy in kilojoules
 */
float64_t convert_mj_to_kj(float64_t mj);

/*
 * @brief Converts energy from megajoules to gigajoules
 *
 * @param Energy in megajoules
 * @return Energy in gigajoules
 */
float64_t convert_mj_to_gj(float64_t mj);

/*
 * @brief Converts energy from gigajoules to joules
 *
 * @param Energy in gigajoules
 * @return Energy in joules
 */
float64_t convert_gj_to_j(float64_t gj);

/*
 * @brief Converts energy from gigajoules to kilojoules
 *
 * @param Energy in gigajoules
 * @return Energy in kilojoules
 */
float64_t convert_gj_to_kj(float64_t gj);

/*
 * @brief Converts energy from gigajoules to megajoules
 *
 * @param Energy in gigajoules
 * @return Energy in megajoules
 */
float64_t convert_gj_to_mj(float64_t gj);

#endif //MATHIX_ENERGY_H