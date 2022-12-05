
We start with a simple "hello world" app

```cpp

#include <iostream>

int main() {
    std::cout << "The Ray Code is AWESOME!!!\n";
}

```



FYI
we start with the following make file:

```cpp

cmake_minimum_required(VERSION 3.24)
project(Show)

set(CMAKE_CXX_STANDARD 14)

add_executable(Show main.cpp)

```


[page 2](./page02.md)
