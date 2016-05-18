# CLion CMake listfile for a library

cmake_minimum_required(VERSION 3.3.2)

project(common_greeting)

set(SOURCE_FILES
    hello.hpp      hello.cpp
    )

include_directories(.)
include_directories(..)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

add_subdirectory(test)
