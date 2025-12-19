#include <math.h>

#include "../../include/units/angle.h"

float64_t convert_degrees_to_radians(float64_t deg) {
    return deg * (M_PI / 180.0);
}

float64_t convert_radians_to_degrees(float64_t rad) {
    return rad * (180.0 / M_PI);
}

float64_t convert_gradians_to_radians(float64_t grad) {
    return grad * (M_PI / 200.0);
}

float64_t convert_radians_to_gradians(float64_t rad) {
    return rad * (200.0 / M_PI);
}