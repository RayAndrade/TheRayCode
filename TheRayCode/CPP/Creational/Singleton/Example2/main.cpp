#include <iostream>
#include "OnlyOne.h"


int main() {
    // Get OnlyOne instance
    OnlyOne* o1 = OnlyOne::getInstance();
    OnlyOne* o2 = OnlyOne::getInstance();

    std::cout << "Address of o1: " << o1 << std::endl;
    std::cout << "Address of o2: " << o2 << std::endl;

    // Demonstrate a method call
    o1->demoMethod();

    //std::cout << "Hello, World!" << std::endl;
    return 0;
}
