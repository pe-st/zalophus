# CLion CMake listfile for common

cmake_minimum_required(VERSION 3.3.2)

project(common)

# CLion IDE integration of googletest recommends adding gtest with add_subdirectory
add_subdirectory(gtest-1.7.0)

# the library directories in dependency order
add_subdirectory(atlas)
add_subdirectory(greeting)

