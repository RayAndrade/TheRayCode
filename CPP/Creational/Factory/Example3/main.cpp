#include <iostream>
#include "DessertFactory.h"

int main() {
    // Create different dessert types using the factory
    auto cake = DessertFactory::createDessert(DessertFactory::CakeType);
    auto iceCream = DessertFactory::createDessert(DessertFactory::IceCreamType);

    // Prepare the desserts
    cake->prepare();
    iceCream->prepare();

    // Output the dessert names
    std::cout << "Created: " << cake->getName() << std::endl;
    std::cout << "Created: " << iceCream->getName() << std::endl;
    //std::cout << "The Ray Code is AWESOME!!!" << std::endl;
    return 0;
}
