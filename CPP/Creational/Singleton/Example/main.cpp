#include "Singleton.h"
#include <iostream>

int main() {
    // Get Singleton instance
    Singleton* s1 = Singleton::getInstance();
    Singleton* s2 = Singleton::getInstance();

    std::cout << "Address of s1: " << s1 << std::endl;
    std::cout << "Address of s2: " << s2 << std::endl;

    // Demonstrate a method call
    s1->demoMethod();
    return 0;
}
