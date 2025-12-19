#include "../../include/units/length_imperial.h"

float64_t convert_inch_to_ft(float64_t inch) {
    return inch / 12.0;
}

float64_t convert_ft_to_inch(float64_t ft) {
    return ft * 12.0;
}

float64_t convert_yd_to_ft(float64_t yd) {
    return yd * 3.0;
}

float64_t convert_ft_to_yd(float64_t ft) {
    return ft / 3.0;
}

float64_t convert_mile_to_yd(float64_t mile) {
    return mile * 1760.0;
}

float64_t convert_yd_to_mile(float64_t yd) {
    return yd / 1760.0;
}

float64_t convert_fur_to_yd(float64_t fur) {
    return fur * 220.0;
}

float64_t convert_yd_to_fur(float64_t yd) {
    return yd / 220.0;
}

float64_t convert_mile_to_fur(float64_t mile) {
    return mile * 8.0;
}

float64_t convert_fur_to_mile(float64_t fur) {
    return fur / 8.0;
}