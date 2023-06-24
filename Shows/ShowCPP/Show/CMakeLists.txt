cmake_minimum_required(VERSION 3.25)
project(ShowCPP)

set(CMAKE_CXX_STANDARD 17)

add_executable(ShowCPP main.cpp UIFactory.h Button.h Scrollbar.h WindowsUIFactory.h WindowsButton.h WindowsScrollbar.h MacUIFactory.h MacButton.h MacScrollbar.h)
