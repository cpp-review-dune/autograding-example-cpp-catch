cmake_minimum_required(VERSION 3.13.4)
project(test_tutorial LANGUAGES CXX VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
# set(CMAKE_CXX_FLAGS_DEBUG "-Wall -Werror -Wextra -Weffc++ -pedantic")
# set(CMAKE_CXX_FLAGS_MINSIZEREL "-Wall -Werror -Wextra -Weffc++ -pedantic")
# set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "-Wall -Werror -Wextra -Weffc++ -pedantic")
set(CMAKE_CXX_FLAGS_RELEASE "-Wall -Werror -Wextra -Weffc++ -pedantic")

#find_package(Catch2 REQUIRED)
add_executable(vectors_test vectors_test.cc)
#target_link_libraries(MyUnitTests PRIVATE Catch2::Catch2)

add_test(vector_testName vector_test)
enable_testing()