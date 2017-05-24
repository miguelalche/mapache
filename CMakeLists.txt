cmake_minimum_required(VERSION 3.6)
project(mapache)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    main.cpp
    map.h)

add_executable(mapache ${SOURCE_FILES})