# CLion CMake listfile for an application

cmake_minimum_required(VERSION 3.3.2)

project(a)

add_subdirectory(../common ${CMAKE_CURRENT_BINARY_DIR}/${PROJECT_NAME}_common)

include_directories(../common)

add_executable(${PROJECT_NAME}
    a.cpp
    )

# the libraries in inverse dependency order
target_link_libraries(${PROJECT_NAME} common_greeting)
target_link_libraries(${PROJECT_NAME} common_atlas)
