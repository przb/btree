cmake_minimum_required(VERSION 3.22)
project(btree)

set(CMAKE_CXX_STANDARD 17)

add_executable(btree main.cpp
        btree.cpp
        btree.h
        node.cpp
        node.h
)
