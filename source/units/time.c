#include "../../include/units/time.h"

float64_t convert_ns_to_us(float64_t ns) {
    return ns / 1e3;
}

float64_t convert_ns_to_ms(float64_t ns) {
    return ns / 1e6;
}

float64_t convert_ns_to_s(float64_t ns) {
    return ns / 1e9;
}

float64_t convert_ns_to_min(float64_t ns) {
    return ns / 6e10;
}

float64_t convert_ns_to_h(float64_t ns) {
    return ns / 3.6e12;
}

float64_t convert_us_to_ns(float64_t us) {
    return us * 1e3;
}

float64_t convert_us_to_ms(float64_t us) {
    return us / 1e3;
}

float64_t convert_us_to_s(float64_t us) {
    return us / 1e6;
}

float64_t convert_us_to_min(float64_t us) {
    return us / 6e7;
}

float64_t convert_us_to_h(float64_t us) {
    return us / 3.6e9;
}

float64_t convert_ms_to_ns(float64_t ms) {
    return ms * 1e6;
}

float64_t convert_ms_to_us(float64_t ms) {
    return ms * 1e3;
}

float64_t convert_ms_to_s(float64_t ms) {
    return ms / 1e3;
}

float64_t convert_ms_to_min(float64_t ms) {
    return ms / 6e4;
}

float64_t convert_ms_to_h(float64_t ms) {
    return ms / 3.6e6;
}

float64_t convert_s_to_ns(float64_t s) {
    return s * 1e9;
}

float64_t convert_s_to_us(float64_t s) {
    return s * 1e6;
}

float64_t convert_s_to_ms(float64_t s) {
    return s * 1e3;
}

float64_t convert_s_to_min(float64_t s) {
    return s / 60.0;
}

float64_t convert_s_to_h(float64_t s) {
    return s / 3600.0;
}

float64_t convert_min_to_ns(float64_t min) {
    return min * 6e10;
}

float64_t convert_min_to_us(float64_t min) {
    return min * 6e7;
}

float64_t convert_min_to_ms(float64_t min) {
    return min * 6e4;
}

float64_t convert_min_to_s(float64_t min) {
    return min * 60.0;
}

float64_t convert_min_to_h(float64_t min) {
    return min / 60.0;
}

float64_t convert_h_to_ns(float64_t h) {
    return h * 3.6e12;
}

float64_t convert_h_to_us(float64_t h) {
    return h * 3.6e9;
}

float64_t convert_h_to_ms(float64_t h) {
    return h * 3.6e6;
}

float64_t convert_h_to_s(float64_t h) {
    return h * 3600.0;
}

float64_t convert_h_to_min(float64_t h) {
    return h * 60.0;
}