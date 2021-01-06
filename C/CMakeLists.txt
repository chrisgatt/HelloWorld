cmake_minimum_required(VERSION 3.0)

project(HelloWorldC)

add_executable (hw HelloWorld.c)

# Doxygen
find_package(Doxygen)
set(DOXYGEN_EXTRACT_ALL YES)
set(DOXYGEN_EXTRACT_LOCAL_METHODS)
doxygen_add_docs(docs)
