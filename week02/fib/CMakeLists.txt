cmake_minimum_required(VERSION 3.8)
project(fib)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES fib.cpp fib.h)
add_library(fib SHARED ${SOURCE_FILES})