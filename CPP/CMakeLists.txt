cmake_minimum_required(VERSION 3.0)

project(HelloWorldCpp)

set(CMAKE_CXX_STANDARD 17)

add_executable (hw HelloWorld.cpp)

# Doxygen
find_package(Doxygen)
set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_EXTRACT_LOCAL_METHODS)
doxygen_add_docs(docs)
