cmake_minimum_required(VERSION 3.25)
project(Show0)

set(CMAKE_CXX_STANDARD 23)

add_executable(Show0 main.cpp UIFactory.h Button.h Scrollbar.h WindowsUIFactory.h WindowsButton.h WindowsScrollbar.h MacUIFactory.h MacButton.h MacScrollbar.h)
