cmake_minimum_required(VERSION 3.5)

project(flashcards VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_COMPILER "/usr/bin/g++-13")
# set(CMAKE_CXX_COMPILER "/usr/bin/clang++")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

target_compile_options(${PROJECT_NAME} PUBLIC -Og -ggdb -Werror -Wall -Wpedantic
    -time)

message(${CMAKE_CXX_COMPILER})
