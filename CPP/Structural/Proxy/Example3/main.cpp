#include "ClownProxy.h"
#include <iostream>

int main() {
    ClownProxy proxy;
    proxy.performAct("fire-eating");
    proxy.performAct("juggling");

    std::cout << "End of the circus show. Remember, every act is a blend of thrill and laughter, especially when there's a proxy in the tent!" << std::endl;

    return 0;
}
