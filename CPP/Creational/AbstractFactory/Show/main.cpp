

#include "Product.h"
#include "ConcreteProduct1.h"
#include "ConcreteProduct2.h"
#include "Factory.h"
#include "ConcreteFactory1.h"
#include "ConcreteFactory2.h"


// Client code
int main() {
    // Create a ConcreteFactory1 object
    Factory* factory1 = new ConcreteFactory1();
    Factory* factory2 = new ConcreteFactory2();

    // Use the factory to create a product
    Product* product1 = factory1->createProduct();
    Product* product2 = factory2->createProduct();

    // Print the name of the product
    std::cout << product1->getName() << std::endl;
    std::cout << product2->getName() << std::endl;

    // Clean up
    delete product1;
    delete factory1;

    delete product2;
    delete factory2;

    return 0;
}
