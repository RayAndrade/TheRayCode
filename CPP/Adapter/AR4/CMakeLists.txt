cmake_minimum_required(VERSION 3.22)
project(AR4)

set(CMAKE_CXX_STANDARD 23)

add_executable(AR4 main.cpp Iparser.h cParser.h IbetterParser.h betterParser.h Adapter.h)
