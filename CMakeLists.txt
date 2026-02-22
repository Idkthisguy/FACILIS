cmake_minimum_required(VERSION 3.10)

project(FACILIS
    VERSION 1.0.0
    DESCRIPTION "A library to make C++ easier"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(facilis_lib INTERFACE)
target_include_directories(facilis_lib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

add_executable(facilis_demo examples/main.cpp)

target_link_libraries(facilis_demo PRIVATE facilis_lib)