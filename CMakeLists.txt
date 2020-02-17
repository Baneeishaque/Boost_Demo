cmake_minimum_required(VERSION 3.15)
project(Boost_Demo)

set(CMAKE_CXX_STANDARD 20)

find_package(Boost 1.72.0 REQUIRED COMPONENTS filesystem)
add_executable(Boost_Demo main.cpp)
target_link_libraries(Boost_Demo Boost::filesystem)
