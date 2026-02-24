#include "Singleton.h"
#include "PlainClass.h"

int main() {
    Singleton* singleton1 = Singleton::Instance();
    singleton1->ShowMessage();

    Singleton* singleton2 = Singleton::Instance();

    if (singleton1 == singleton2) {
        std::cout << "Both Singleton instances are the SAME object." << std::endl;
    } else {
        std::cout << "ERROR: Singleton instances are different! (This should not happen)" << std::endl;
    }

    std::cout << "\n--- Creating PlainClass instances ---" << std::endl;
    PlainClass* plain1 = new PlainClass();
    PlainClass* plain2 = new PlainClass();
    if (plain1 == plain2) {
        std::cout << "ERROR: PlainClass instances are the same! (This should not happen)" << std::endl;
    } else {
        std::cout << "PlainClass instances are DIFFERENT objects." << std::endl;
    }
    delete plain1;
    delete plain2;

    return 0;
}
