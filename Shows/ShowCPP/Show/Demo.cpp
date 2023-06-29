//
// Created by ray on 6/28/23.
//
#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;

    //Singleton s3;  // Error: Constructor is private

    return 0;
}