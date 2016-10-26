cmake_minimum_required (VERSION 2.6)
project(llv2_test)

include_directories(
    $ENV{GTEST_DIR}/googletest/include
)

set(SOURCES
    $ENV{GTEST_DIR}/googletest/src/gtest_main.cc
    TestLogSource.cpp
)

add_executable(llv2_test ${SOURCES})

