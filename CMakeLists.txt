cmake_minimum_required(VERSION 2.6)

project(UczymySieGita)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall -std=c++11")

add_executable(calc.out src/main.cpp src/calc.cpp)

