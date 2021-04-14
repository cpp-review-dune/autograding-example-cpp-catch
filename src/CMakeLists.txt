cmake_minimum_required(VERSION 3.19.6)
project(test_tutorial LANGUAGES CXX VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)

find_package(Catch2 REQUIRED)
add_executable(MyUnitTests MyUnitTests.cc)
target_link_libraries(MyUnitTests PRIVATE Catch2::Catch2)

add_test(MyUnitTestName MyUnitTests)
enable_testing()