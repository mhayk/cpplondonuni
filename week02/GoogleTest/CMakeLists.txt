cmake_minimum_required(VERSION 3.8)
project(GoogleTest)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googlemock/include)
include_directories(lib/googletest-master/googletest/include)

add_library(fib SHARED ../fib/fib.cpp)
include_directories(../fib)

set(SOURCE_FILES main.cpp Tests/testFib.cpp)
add_executable(GoogleTest ${SOURCE_FILES})

target_link_libraries(GoogleTest gtest gtest_main fib)