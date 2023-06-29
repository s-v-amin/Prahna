cmake_minimum_required(VERSION 3.13 FATAL_ERROR) # sets minimum version of CMake required
project(Prahna VERSION 0.1) # sets project name and version number
set(CMAKE_CXX_STANDARD 17) # sets C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED True) # sets the min C++ standard as required
add_library(prahna output.cpp) # creates a library called prahna, linking to main.cpp