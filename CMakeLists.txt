cmake_minimum_required(VERSION 3.20)
project(MySpecialProject VERSION 1.0.0)

add_library(
    libr
    libr.hpp
    libr.cpp
)

add_executable(ccpp main.cpp)

target_link_libraries(ccpp PRIVATE libr)
