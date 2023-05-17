#include <iostream>
#include "Singleton.h"

int main() {
    Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();

    std::cout << s << std::endl;
    std::cout << r << std::endl;

    return 0;
}