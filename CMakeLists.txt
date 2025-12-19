cmake_minimum_required(VERSION 3.28.3)
project(mathix LANGUAGES C ASM_NASM)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

enable_language(ASM_NASM)

set(MATHIX_INCLUDE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/include")

set(MATHIX_SOURCES
        source/units/angle.c
        source/units/energy.c
        source/units/length_cross.c
        source/units/length_imperial.c
        source/units/length_metric.c
        source/units/mass_imperial.c
        source/units/mass_metric.c
        source/units/temperature.c
        source/units/time.c
        source/units/volume_imperial.c
        source/units/volume_metric.c
)

add_library(mathix STATIC ${MATHIX_SOURCES})

target_include_directories(mathix
        PUBLIC ${MATHIX_INCLUDE_DIR}
)

add_executable(mathix_app
        source/main.c
)

target_link_libraries(mathix_app
        PRIVATE mathix
)

target_include_directories(mathix_app
        PRIVATE ${MATHIX_INCLUDE_DIR}
)

# Build with unit tests:
# cmake -B build -DBUILD_TESTS=ON
# cmake --build build
# ./build/mathix_tests

option(BUILD_TESTS "Build unit tests with Unity" OFF)

if(BUILD_TESTS)
    message(STATUS "Building unit tests")

    set(TEST_SOURCES
            tests/angle_test.c
            tests/unity/unity.c
    )

    add_executable(mathix_tests ${TEST_SOURCES})

    target_include_directories(mathix_tests
            PRIVATE ${MATHIX_INCLUDE_DIR}
            tests/unity
    )

    target_link_libraries(mathix_tests
            PRIVATE mathix
            m
    )
endif()

# Dockerfile

install(TARGETS mathix_app
        RUNTIME DESTINATION bin)

if(BUILD_TESTS)
    install(TARGETS mathix_tests
            RUNTIME DESTINATION bin)
endif()