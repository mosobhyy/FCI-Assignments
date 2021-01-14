cmake_minimum_required(VERSION 3.15)
project(Vector)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(Vector
        include/Course.h
        include/FciVector.h
        include/Student.h
        src/Course.cpp
        src/Student.cpp
        main.cpp)
