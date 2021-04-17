cmake_minimum_required(VERSION 3.13.4)
project(test_tutorial LANGUAGES CXX VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -Werror -Wextra -Weffc++ -pedantic")

add_executable(main main.cc)
add_executable(vector vector.cc)