cmake_minimum_required(VERSION 3.27)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        persona.cpp
        persona.h
        automobil.cpp
        automobil.h
        Garage.cpp
        Garage.h)
