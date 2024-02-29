cmake_minimum_required(VERSION 3.5)

project(Flashcards VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

enable_testing()

add_subdirectory(src)
add_subdirectory(tests)

target_compile_options(${PROJECT_NAME} PUBLIC -ggdb -Werror -Wall -Wpedantic)

