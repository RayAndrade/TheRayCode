// Demo.cpp
#include "Singleton.h"
#include "NonSingleton.h"
#include <iostream>

int main() {
    // Creating Singleton instances
    Singleton* singleton1 = Singleton::getInstance();
    Singleton* singleton2 = Singleton::getInstance();

    // Verifying that both addresses are the same
    std::cout << "Singleton instance 1 address: " << singleton1 << std::endl;
    std::cout << "Singleton instance 2 address: " << singleton2 << std::endl;

    // Creating NonSingleton instances
    NonSingleton nonSingleton1;
    NonSingleton nonSingleton2;

    // Verifying that both addresses are different
    std::cout << "NonSingleton instance 1 address: " << &nonSingleton1 << std::endl;
    std::cout << "NonSingleton instance 2 address: " << &nonSingleton2 << std::endl;

    return 0;
}
