cmake_minimum_required(VERSION 4.1)
project(mathix LANGUAGES C ASM_NASM)

set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED ON)

enable_language(ASM_NASM)

add_executable(mathix source/main.c)
