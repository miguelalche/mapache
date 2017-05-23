cmake_minimum_required(VERSION 3.8)
project(mapache)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        map.h)

add_executable(mapache ${SOURCE_FILES})