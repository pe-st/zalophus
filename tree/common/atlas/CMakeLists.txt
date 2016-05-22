# CLion CMake listfile for a library

cmake_minimum_required(VERSION 3.3.2)

project(common_atlas)

set(SOURCE_FILES
    world.hpp      world.cpp
    )

include_directories(.)
include_directories(..)

add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES})

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_CURRENT_SOURCE_DIR}/../bin/cmake/lib)

add_custom_target(install_${PROJECT_NAME}
        make install
        DEPENDS ${PROJECT_NAME}
        COMMENT "Installing ${PROJECT_NAME}")

add_subdirectory(test)
