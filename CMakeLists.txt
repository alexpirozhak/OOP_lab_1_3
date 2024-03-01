cmake_minimum_required(VERSION 3.27)
project(OOP_lab_1_3)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_lab_1_3 main.cpp
        LongLong.cpp
        LongLong.h
        Google_tests/test.cpp)

add_subdirectory(Google_tests)