cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(sandbox)
add_executable(sandbox main.cpp)
target_link_directories(sandbox PRIVATE ${CMAKE_SOURCE_DIR}/../../PrahnaFiles/build) #supposed to work without this, but doesn't at the moment.
target_link_libraries(sandbox prahna)