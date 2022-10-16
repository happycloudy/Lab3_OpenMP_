cmake_minimum_required(VERSION 3.23)
project(Lab3_OpenMP_)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fopenmp")

add_executable(Lab3_OpenMP_ main.cpp)
