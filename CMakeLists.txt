cmake_minimum_required(VERSION 3.1)

project(TravisGTest)

enable_testing()
find_package(GTest REQUIRED)

add_executable(
    ts_travis_gtest
    test.cpp)

target_link_libraries(
    ts_travis_gtest
    GTest::GTest
    GTest::Main)

add_test(test test)
