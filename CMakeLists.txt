cmake_minimum_required(VERSION 3.26)
project(algorithmz)

set(CMAKE_CXX_STANDARD 17)

add_executable(algorithmz main.cpp
        src/quicksort.cpp
        include/quicksort.h)

target_include_directories(algorithmz PUBLIC include/)