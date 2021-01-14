cmake_minimum_required(VERSION 3.17)
project(Problem_3_Matrix)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Problem_3_Matrix
        include/Matrix.h
        include/MatrixCalculator.h
        src/Matrix.cpp
        src/MatrixCalculator.cpp
        main.cpp)
