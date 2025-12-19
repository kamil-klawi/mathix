#include "../../include/units/mass_imperial.h"

float64_t convert_gr_to_oz(float64_t gr) {
    return gr / 437.5;
}

float64_t convert_gr_to_lb(float64_t gr) {
    return gr / 7000.0;
}

float64_t convert_oz_to_gr(float64_t oz) {
    return oz * 437.5;
}

float64_t convert_oz_to_lb(float64_t oz) {
    return oz / 16.0;
}

float64_t convert_lb_to_gr(float64_t lb) {
    return lb * 7000.0;
}

float64_t convert_lb_to_oz(float64_t lb) {
    return lb * 16.0;
}