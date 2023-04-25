#include <iostream>
#include "Toy.h"
#include "ToyFactory.h"
#include "CarToyFactory.h"
#include "DollToyFactory.h"

int main() {
    ToyFactory* carFactory = new CarToyFactory();
    ToyFactory* dollFactory = new DollToyFactory();

    Toy* carToy = carFactory->createToy();
    Toy* dollToy = dollFactory->createToy();

    carToy->play();
    dollToy->play();

    delete carToy;
    delete dollToy;
    delete carFactory;
    delete dollFactory;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
