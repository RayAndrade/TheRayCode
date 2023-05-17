#include <iostream>
#include "Singleton.h"


int main() {
    std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();

    std::cout << s << std::endl;
    std::cout << r << std::endl;
    return 0;
}