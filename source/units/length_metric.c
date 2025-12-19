#include "../../include/units/length_metric.h"

float64_t convert_mm_to_m(float64_t millimetres) {
    return millimetres / 1000.0;
}

float64_t convert_m_to_mm(float64_t metres) {
    return metres * 1000.0;
}

float64_t convert_cm_to_m(float64_t centimetres) {
    return centimetres / 100.0;
}

float64_t convert_m_to_cm(float64_t metres) {
    return metres * 100.0;
}

float64_t convert_km_to_m(float64_t kilometres) {
    return kilometres * 1000.0;
}

float64_t convert_m_to_km(float64_t metres) {
    return metres / 1000.0;
}