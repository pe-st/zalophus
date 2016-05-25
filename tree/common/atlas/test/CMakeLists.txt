# CLion CMake listfile for unit tests

cmake_minimum_required(VERSION 3.3.2)

project(common_atlas_test)

# CLion IDE integration of googletest recommends adding gtest with add_subdirectory
add_subdirectory(../../gtest-1.7.0 ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}_gtest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJECT_NAME}
    world_test.cpp
    )

# the libraries in inverse dependency order
target_link_libraries(${PROJECT_NAME} common_atlas)
target_link_libraries(${PROJECT_NAME} gtest gtest_main)

