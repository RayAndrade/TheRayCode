cmake_minimum_required(VERSION 3.26)
project(Example)

set(CMAKE_CXX_STANDARD 17)

add_executable(Example main.cpp
        OldPrinter.h
        OldPrinter.cpp
        Document.h
        Document.cpp
        PrinterAdapter.h
        PrinterAdapter.cpp
)
