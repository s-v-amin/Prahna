cmake_minimum_required(VERSION 3.26.4 FATAL_ERROR) # sets minimum version of CMake required
project(Prahna VERSION 0.1) # sets project name and version number
set(CMAKE_CXX_STANDARD 17) # sets C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED True) # sets the min C++ standard as required
add_executable(prahna main.cpp) # creates an executable called prahna, linking to main.cpp
install (TARGETS prahna DESTINATION bin) # creates the executable in the local bin folder for use from anywhere!