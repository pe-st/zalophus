# CLion CMake listfile for unit tests

cmake_minimum_required(VERSION 3.3.2)

project(common_greeting_test)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(${PROJECT_NAME}
    hello_test.cpp
    )

# the libraries in inverse dependency order
target_link_libraries(${PROJECT_NAME} common_greeting)
target_link_libraries(${PROJECT_NAME} common_atlas)
target_link_libraries(${PROJECT_NAME} gtest gtest_main)
