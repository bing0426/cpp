cmake_minimum_required(VERSION 3.28)
project(Circle)

set(CMAKE_CXX_STANDARD 17)

add_executable(Circle   main.cpp
                        Point.cpp
                        Circle.cpp
                        )