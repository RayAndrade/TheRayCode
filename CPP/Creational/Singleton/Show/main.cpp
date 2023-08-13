#include <iostream>
#include "Singleton.h"

int main() {

    Singleton* s = Singleton::getInstance();
    Singleton* r = Singleton::getInstance();

    std::cout <<"s : " << s << std::endl;
    std::cout <<"r : " << r << std::endl;
     return 0;
}
