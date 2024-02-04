#include "FlyweightFactory.h"
#include <iostream>

int main() {
    FlyweightFactory factory;

    auto plant1 = factory.getFlyweight("tree");
    auto plant2 = factory.getFlyweight("tree");
    auto plant3 = factory.getFlyweight("bush");

    std::cout << "Plant 1 says: ";
    plant1->tellJoke();
    std::cout << "Plant 2 says: ";
    plant2->tellJoke();
    std::cout << "Plant 3 says: ";
    plant3->tellJoke();

    // Let's add a new type of plant
    auto plant4 = factory.getFlyweight("flower");
    std::cout << "Plant 4 says: ";
    plant4->tellJoke();

    return 0;
}
