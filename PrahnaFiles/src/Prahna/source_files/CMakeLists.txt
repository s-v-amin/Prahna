cmake_minimum_required(VERSION 3.13 FATAL_ERROR) # sets minimum version of CMake required
project(prahna VERSION 0.1) # sets project name and version number
set(CMAKE_CXX_STANDARD 17) # sets C++ standard
set(CMAKE_CXX_STANDARD_REQUIRED True) # sets the min C++ standard as required
add_library(prahna output.cpp application.cpp) # creates a library called prahna, linking to output.cpp and application.cpp
target_compile_definitions(prahna PUBLIC PR_PLATFORM_MAC PUBLIC PR_VISIBILITY)
set_target_properties(prahna PROPERTIES PUBLIC_HEADER ../header_files/output.h PUBLIC_HEADER ../header_files/core.h)
install(TARGETS prahna LIBRARY DESTINATION lib 
        PUBLIC_HEADER DESTINATION include)