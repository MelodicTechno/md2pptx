cmake_minimum_required(VERSION 3.10)
project(MarkdownToPPTX)

set(CMAKE_CXX_STANDARD 11)

# include_directories(include)
add_executable(MarkdownToPPTX src/MarkdownParser.cpp src/PPTXCreator.cpp main.cpp)
# find_package(XlsxWriter REQUIRED)
