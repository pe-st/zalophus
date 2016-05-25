# CLion CMake listfile for unit tests

cmake_minimum_required(VERSION 3.3.2)

project(common_greeting_test)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJECT_NAME}
    hello_test.cpp
    )

include(ExternalProject)
ExternalProject_Add(common_atlas_ext
        SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/../../atlas
        # PREFIX ..
        # PREFIX ${CMAKE_CURRENT_BINARY_DIR}/common_atlas_ext
        )

# ExternalProject_Get_Property(common_atlas_ext install_dir)

# the libraries in inverse dependency order
target_link_libraries(${PROJECT_NAME} common_greeting)
add_dependencies(${PROJECT_NAME} common_atlas_ext)
target_link_libraries(${PROJECT_NAME} ../../bin/cmake/lib/libcommon_atlas.a)
target_link_libraries(${PROJECT_NAME} gtest gtest_main)
