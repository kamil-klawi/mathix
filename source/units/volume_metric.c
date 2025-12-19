#include "../../include/units/volume_metric.h"

float64_t convert_l_to_ml(float64_t l) {
    return l * 1000.0;
}

float64_t convert_l_to_dm3(float64_t l) {
    return l;
}

float64_t convert_dm3_to_ml(float64_t dm3) {
    return dm3 * 1000.0;
}

float64_t convert_dm3_to_l(float64_t dm3) {
    return dm3;
}