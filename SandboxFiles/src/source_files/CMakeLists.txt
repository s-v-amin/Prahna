cmake_minimum_required(VERSION 3.13 FATAL_ERROR)
project(sandbox)
add_executable(sandbox sandboxApp.cpp)
target_compile_definitions(sandbox PUBLIC PR_PLATFORM_MAC)
target_link_directories(sandbox PRIVATE ${CMAKE_SOURCE_DIR}/../../../PrahnaFiles/build PRIVATE ${CMAKE_SOURCE_DIR}/../../../PrahnaFiles/src)  #supposed to work without this, but doesn't at the moment.
target_link_libraries(sandbox prahna)