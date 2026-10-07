cmake_minimum_required(VERSION 4.2)
project(inheritance_cw_task2)

set(CMAKE_CXX_STANDARD 20)

add_executable(inheritance_cw_task2 main.cpp
        Item.cpp
        Item.h
        MusicCD.cpp
        MusicCD.h
        MovieDVD.cpp
        MovieDVD.h)
