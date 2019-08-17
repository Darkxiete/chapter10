cmake_minimum_required(VERSION 3.14)
project(chapter10)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter10 main.cpp)

add_executable(stock00 stock00.h stock00.cpp usestock0.cpp)
add_executable(stock10 stock10.h stock10.cpp usestock2.cpp)