#include <iostream>
#include "Singleton.h"
#include "Regular.h"

int main() {
    std::cout << "=== Singleton ===\n";
    Singleton& s1 = Singleton::getInstance();
    Singleton& s2 = Singleton::getInstance();

    std::cout << "Address of Singleton s1: " << &s1 << "\n";
    std::cout << "Address of Singleton s2: " << &s2 << "\n";

    if(&s1 == &s2) {
        std::cout << "Both pointers point to the same object.\n";
    }

    std::cout << "Singleton doing something: ";
    s1.doSomething();
    std::cout << "\n";

    // Regular object usage
    std::cout << "=== Regular ===\n";
    Regular r1;
    Regular r2;

    std::cout << "Address of Regular r1: " << &r1 << "\n";
    std::cout << "Address of Regular r2: " << &r2 << "\n";

    if(&r1 != &r2) {
        std::cout << "Both pointers point to different objects.\n";
    }

    std::cout << "Regular object doing something: ";
    r1.doSomething();
    std::cout << "\n";
    return 0;
}
