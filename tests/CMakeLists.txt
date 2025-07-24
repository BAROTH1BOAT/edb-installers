cmake_minimum_required(VERSION 3.10)
project(HelloTest)

set(CMAKE_CXX_STANDARD 11)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(hello_test hello_test.cpp)

find_package(GTest REQUIRED)
target_link_libraries(hello_test GTest::GTest GTest::Main)