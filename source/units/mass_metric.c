#include "../../include/units/mass_metric.h"

float64_t convert_t_to_kg(float64_t t) {
    return t * 1e3;
}

float64_t convert_t_to_dag(float64_t t) {
    return t * 1e5;
}

float64_t convert_t_to_g(float64_t t) {
    return t * 1e6;
}

float64_t convert_t_to_mg(float64_t t) {
    return t * 1e9;
}

float64_t convert_t_to_ug(float64_t t) {
    return t * 1e12;
}

float64_t convert_kg_to_t(float64_t kg) {
    return kg / 1e3;
}

float64_t convert_kg_to_dag(float64_t kg) {
    return kg * 1e2;
}

float64_t convert_kg_to_g(float64_t kg) {
    return kg * 1e3;
}

float64_t convert_kg_to_mg(float64_t kg) {
    return kg * 1e6;
}

float64_t convert_kg_to_ug(float64_t kg) {
    return kg * 1e9;
}

float64_t convert_dag_to_t(float64_t dag) {
    return dag / 1e5;
}

float64_t convert_dag_to_kg(float64_t dag) {
    return dag / 1e2;
}

float64_t convert_dag_to_g(float64_t dag) {
    return dag * 10.0;
}

float64_t convert_dag_to_mg(float64_t dag) {
    return dag * 1e3;
}

float64_t convert_dag_to_ug(float64_t dag) {
    return dag * 1e6;
}

float64_t convert_g_to_t(float64_t g) {
    return g / 1e6;
}

float64_t convert_g_to_kg(float64_t g) {
    return g / 1e3;
}

float64_t convert_g_to_dag(float64_t g) {
    return g / 10.0;
}

float64_t convert_g_to_mg(float64_t g) {
    return g * 1e3;
}

float64_t convert_g_to_ug(float64_t g) {
    return g * 1e6;
}

float64_t convert_mg_to_t(float64_t mg) {
    return mg / 1e9;
}

float64_t convert_mg_to_kg(float64_t mg) {
    return mg / 1e6;
}

float64_t convert_mg_to_dag(float64_t mg) {
    return mg / 1e5;
}

float64_t convert_mg_to_g(float64_t mg) {
    return mg / 1e3;
}

float64_t convert_mg_to_ug(float64_t mg) {
    return mg * 1e3;
}

float64_t convert_ug_to_t(float64_t ug) {
    return ug / 1e12;
}

float64_t convert_ug_to_kg(float64_t ug) {
    return ug / 1e9;
}

float64_t convert_ug_to_dag(float64_t ug) {
    return ug / 1e7;
}

float64_t convert_ug_to_g(float64_t ug) {
    return ug / 1e6;
}

float64_t convert_ug_to_mg(float64_t ug) {
    return ug / 1e3;
}