/**
 * @file angle_test.c
 * @brief Unit tests for angle conversion functions
 *
 * @date 19-12-2025
 */

#include <math.h>

#include "unity/unity.h"
#include "../include/units/angle.h"

void setUp() {}

void tearDown() {}

void test_degrees_to_radians(void) {
    float64_t deg = 180.0;
    float64_t rad = convert_degrees_to_radians(deg);
    TEST_ASSERT_FLOAT_WITHIN(1e-9, M_PI, rad);
}

int main() {
    UNITY_BEGIN();
    RUN_TEST(test_degrees_to_radians);
    return UNITY_END();
}