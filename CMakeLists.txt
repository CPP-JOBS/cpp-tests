cmake_minimum_required(VERSION 3.5)

project(cpp-tests LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp-tests
    src/main.cpp
    src/test_0000.h
    src/test_0000.cpp
    src/test_0001.h
    src/test_0001.cpp
    src/test_0002.h
    src/test_0002.cpp
    src/test_0003.h
    src/test_0003.cpp
    src/test_0004.h
    src/test_0004.cpp
    src/test_0005.h
    src/test_0005.cpp
    src/test_0006.h
    src/test_0006.cpp
    src/test_0007.h
    src/test_0007.cpp
    src/test_0008.h
    src/test_0008.cpp
    src/test_0009.h
    src/test_0009.cpp
    src/test_0010.h
    src/test_0010.cpp
    src/test_0011.h
    src/test_0011.cpp
    src/test_0012.h
    src/test_0012.cpp
    src/test_0013.h
    src/test_0013.cpp
    src/test_0014.h
    src/test_0014.cpp
    src/test_0015.h
    src/test_0015.cpp
    src/tests.h
)

target_include_directories(cpp-tests
    PRIVATE src/
 )
