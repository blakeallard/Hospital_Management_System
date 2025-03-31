cmake_minimum_required(VERSION 3.30)
project(Hospital_Management_System)

set(CMAKE_CXX_STANDARD 20)

add_executable(Hospital_Management_System main.cpp
        Patient.cpp
        Patient.h)
