cmake_minimum_required(VERSION 3.17)
project(FCI)

set(CMAKE_CXX_STANDARD 14)

add_executable(FCI main.cpp FCIIdentity.cpp FCIIdentity.h FCIStudent.cpp FCIStudent.h FCICourse.cpp FCICourse.h Person.cpp Person.h)