#include "../../include/units/length_cross.h"

float64_t convert_inch_to_cm(float64_t inch) {
    return inch * 2.54;
}

float64_t convert_cm_to_inch(float64_t cm) {
    return cm / 2.54;
}

float64_t convert_ft_to_m(float64_t ft) {
    return ft * 0.3048;
}

float64_t convert_m_to_ft(float64_t m) {
    return m / 0.3048;
}

float64_t convert_yd_to_m(float64_t yd) {
    return yd * 0.9144;
}

float64_t convert_m_to_yd(float64_t m) {
    return m / 0.9144;
}

float64_t convert_mile_to_m(float64_t mile) {
    return mile * 1609;
}

float64_t convert_m_to_mile(float64_t m) {
    return m / 1609;
}

float64_t convert_mile_to_km(float64_t mile) {
    return mile * 1.609;
}

float64_t convert_km_to_mile(float64_t km) {
    return km / 1.609;
}

float64_t convert_acre_to_m2(float64_t acre) {
    return acre * 4047;
}

float64_t convert_m2_to_acre(float64_t m2) {
    return m2 / 4047;
}