cmake_minimum_required(VERSION 3.23)
project(untitled C)

set(CMAKE_C_STANDARD 11)

add_executable(untitled "10.c")

add_subdirectory(libs)
add_library(str libs/string/string_.h libs/string/string_.c)
add_library(vector libs/structures/vector/vector.h libs/structures/vector/vector.c)
target_link_libraries(untitled algoritms)
target_link_libraries(untitled structures)
target_link_libraries(untitled string)

