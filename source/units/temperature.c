#include "../../include/units/temperature.h"

float64_t convert_celsius_to_fahrenheit(float64_t deg) {
    return deg * (9.0/5.0) + 32.0;
}

float64_t convert_celsius_to_kelvin(float64_t deg) {
    return deg + 273.15;
}

float64_t convert_fahrenheit_to_celsius(float64_t deg) {
    return (deg - 32.0) * (5.0/9.0);
}

float64_t convert_fahrenheit_to_kelvin(float64_t deg) {
    return (deg - 32.0) * (5.0/9.0) + 273.15;
}

float64_t convert_kelvin_to_celsius(float64_t deg) {
    return deg - 273.15;
}

float64_t convert_kelvin_to_fahrenheit(float64_t deg) {
    return (deg - 273.15) * (9.0/5.0) + 32.0;
}