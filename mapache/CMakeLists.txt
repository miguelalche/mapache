cmake_minimum_required(VERSION 3.7)
project(mapache)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        map.h
        test.cpp)

set(SOURCE_FILES
        main.cpp
        map.h test.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(runTests test.cpp map.h)
target_link_libraries(runTests ${GTEST_LIBRARIES} pthread)

add_executable(mapache map.h main.cpp)