cmake_minimum_required(VERSION 3.17)
project(Proxy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Proxy main.cpp Subject.h RealSubject.h Proxy.h)