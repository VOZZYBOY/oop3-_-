cmake_minimum_required(VERSION 3.10)
project(LAB3)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(googletest)

add_executable(main main.cpp Figure.cpp Square.cpp Rectangle.cpp Trapezoid.cpp Array.cpp)
add_executable(tests tests.cpp Figure.cpp Square.cpp Rectangle.cpp Trapezoid.cpp Array.cpp)

target_link_libraries(tests PRIVATE GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(tests)