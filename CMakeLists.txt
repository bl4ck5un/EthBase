cmake_minimum_required(VERSION 3.3)
project(Eth)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp SHA3.cpp RLP.cpp CommonData.cpp)
add_executable(Eth ${SOURCE_FILES})