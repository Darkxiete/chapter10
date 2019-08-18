cmake_minimum_required(VERSION 3.14)
project(chapter10)

set(CMAKE_CXX_STANDARD 14)

add_executable(chapter10 main.cpp)

add_executable(test test/test.cpp)
add_executable(vector test/vector.cpp)

add_executable(stock00 stock00.h stock00.cpp usestock0.cpp)
add_executable(stock10 stock10.h stock10.cpp usestock1.cpp)
add_executable(stock20 stock20.h stock20.cpp usestock2.cpp)
add_executable(enum_scope enum_scope.cpp)
add_executable(stack stack.h stack.cpp stacker.cpp)
add_executable(class_value class_value.cpp)

add_executable(review review.cpp)

add_executable(p1 pp/p1/p1.h pp/p1/p1_1.cpp pp/p1/p1_2.cpp)
add_executable(p2 pp/p2/p2.h pp/p2/p2_1.cpp pp/p2/p2_2.cpp)
add_executable(p3 pp/p3/p3.cpp pp/p3/p3.h pp/p3/p3_2.cpp)
add_executable(p4 pp/p4/Sales.cpp pp/p4/Sales.h pp/p4/p4.cpp)
add_executable(p5 pp/p5/Stack.cpp pp/p5/Stack.h pp/p5/p5.cpp)
add_executable(p6 pp/p6/Move.cpp pp/p6/Move.h pp/p6/p6.cpp)
add_executable(p7 pp/p7/Plorg.cpp pp/p7/Plorg.h pp/p7/p7.cpp)
add_executable(p8 pp/p8/List.h pp/p8/p8.cpp pp/p8/List.hpp)