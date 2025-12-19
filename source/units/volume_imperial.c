#include "../../include/units/volume_imperial.h"

float64_t convert_fl_oz_to_pt(float64_t fl_oz) {
    return fl_oz / 16.0;
}

float64_t convert_fl_oz_to_qt(float64_t fl_oz) {
    return fl_oz / 32.0;
}

float64_t convert_fl_oz_to_gal(float64_t fl_oz) {
    return fl_oz / 128.0;
}

float64_t convert_pt_to_fl_oz(float64_t pt) {
    return pt * 16.0;
}

float64_t convert_pt_to_qt(float64_t pt) {
    return pt / 2.0;
}

float64_t convert_pt_to_gal(float64_t pt) {
    return pt / 8.0;
}

float64_t convert_qt_to_fl_oz(float64_t qt) {
    return qt * 32.0;
}

float64_t convert_qt_to_pt(float64_t qt) {
    return qt * 2.0;
}

float64_t convert_qt_to_gal(float64_t qt) {
    return qt / 4.0;
}

float64_t convert_gal_to_fl_oz(float64_t gal) {
    return gal * 128.0;
}

float64_t convert_gal_to_pt(float64_t gal) {
    return gal * 8.0;
}

float64_t convert_gal_to_qt(float64_t gal) {
    return gal * 4.0;
}