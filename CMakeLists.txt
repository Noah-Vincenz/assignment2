cmake_minimum_required(VERSION 3.6)
project(assignment2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    CMakeLists.txt
    TestStack.cpp
    HowManyWaysToMake.h
    MaximumGates.h
        README.md
        Stack.h
        vector.h
        )

add_executable(assignment2 ${SOURCE_FILES})