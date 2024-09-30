cmake_minimum_required(VERSION 3.11)

project(MarkdownToPPTX)

set(CMAKE_CXX_STANDARD 11)

include_directories("${PROJECT_SOURCE_DIR}/include")

add_executable(MarkdownToPPTX src/main.cpp src/markdown/MarkdownFile.cpp)