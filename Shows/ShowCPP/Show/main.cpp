#include <iostream>
#include "ProductFactory.h"

int main() {
    Product* productA = ProductFactory::CreateProduct(ProductType::A);
    if (productA != nullptr) {
        std::cout << "Created: " << productA->GetName() << std::endl;
        delete productA;
    }

    Product* productB = ProductFactory::CreateProduct(ProductType::B);
    if (productB != nullptr) {
        std::cout << "Created: " << productB->GetName() << std::endl;
        delete productB;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
