#include "../../include/units/energy.h"

float64_t convert_j_to_cal(float64_t j) {
    return j * 4.184;
}

float64_t convert_cal_to_j(float64_t cal) {
    return cal * (1.0 / 4.184);
}

float64_t convert_cal_to_kcal(float64_t cal) {
    return cal / 1000.0;
}

float64_t convert_kcal_to_cal(float64_t kcal) {
    return kcal * 1000.0;
}

float64_t convert_j_to_kj(float64_t j) {
    return j / 1000.0;
}

float64_t convert_j_to_mj(float64_t j) {
    return j / 1000000.0;
}

float64_t convert_j_to_gj(float64_t j) {
    return j / 1000000000.0;
}

float64_t convert_kj_to_j(float64_t kj) {
    return kj * 1000.0;
}

float64_t convert_kj_to_mj(float64_t kj) {
    return kj / 1000.0;
}

float64_t convert_kj_to_gj(float64_t kj) {
    return kj / 1000000.0;
}

float64_t convert_mj_to_j(float64_t mj) {
    return mj * 1000000.0;
}

float64_t convert_mj_to_kj(float64_t mj) {
    return mj * 1000.0;
}

float64_t convert_mj_to_gj(float64_t mj) {
    return mj / 1000.0;
}

float64_t convert_gj_to_j(float64_t gj) {
    return gj * 1000000000.0;
}

float64_t convert_gj_to_kj(float64_t gj) {
    return gj * 1000000.0;
}

float64_t convert_gj_to_mj(float64_t gj) {
    return gj * 1000.0;
}