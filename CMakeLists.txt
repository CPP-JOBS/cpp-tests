cmake_minimum_required(VERSION 3.5)

project(cpp-tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(src/)

add_executable(	cpp-tests
				src/main.cpp
				src/test_0000.cpp
				src/test_0001.cpp
				src/test_0002.cpp
				src/test_0003.cpp
				src/test_0004.cpp
				src/test_0005.cpp
				src/test_0006.cpp
				src/test_0007.cpp
				src/test_0008.cpp
				src/test_0009.cpp
                )
