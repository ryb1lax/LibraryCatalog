cmake_minimum_required(VERSION 3.20)

project(LibraryCatalog)

add_executable(LibraryCatalog
    src/main.cpp
    src/Book.h
    src/Book.cpp
)

set_property(TARGET LibraryCatalog PROPERTY CXX_STANDARD 17)