cmake_minimum_required(VERSION 3.22)
project(vendingmachine)

set(CMAKE_CXX_STANDARD 11)

add_executable(vendingmachine main.cpp drink.h vm.h)
