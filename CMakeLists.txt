cmake_minimum_required(VERSION 3.29)
project(tetris)

set(CMAKE_CXX_STANDARD 20)

add_executable(tetris main.cpp
        src/grid.h
        src/grid.cpp)


# Link Raylib to your executable
target_link_libraries(tetris raylib)
