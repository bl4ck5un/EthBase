cmake_minimum_required(VERSION 3.3)
project(Eth)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_subdirectory(libethcore)
add_subdirectory(libdevcore)
add_subdirectory(libdevcrypto)

include_directories(${CMAKE_CURRENT_LIST_DIR})
add_executable(Eth ${SOURCE_FILES})
target_link_libraries(Eth devcore)
target_link_libraries(Eth ethcore)
target_link_libraries(Eth devcrypto)