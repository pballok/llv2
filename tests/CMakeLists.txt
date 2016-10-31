cmake_minimum_required (VERSION 2.6)
project(llv2_test)

include_directories(
    $ENV{GTEST_DIR}/googletest/include
    $ENV{GTEST_DIR}/googletest
    ../src
)

set(HEADERS
    ../src/LogSource.h
)

set(SOURCES
    $ENV{GTEST_DIR}/googletest/src/gtest_main.cc
    $ENV{GTEST_DIR}/googletest/src/gtest-all.cc
    ../src/LogSource.cpp
    TestLogSource.cpp
)

add_custom_target(headers SOURCES ${HEADERS})

add_executable(llv2_test ${SOURCES})

