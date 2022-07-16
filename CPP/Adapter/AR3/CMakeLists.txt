cmake_minimum_required(VERSION 3.22)
project(Adapter)

set(CMAKE_CXX_STANDARD 23)

add_executable(Adapter main.cpp RemoteDisplay.h LocalDisplay.h DispayAdapter.h)
