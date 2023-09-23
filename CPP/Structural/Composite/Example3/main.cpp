#include "Cheese.h"
#include "Pepperoni.h"
#include "MeatCombo.h"
#include "VeggieMix.h"
#include <memory>

int main() {
    auto cheese = std::make_shared<Cheese>();
    auto pepperoni = std::make_shared<Pepperoni>();

    MeatCombo meaty;
    meaty.add(cheese);
    meaty.add(pepperoni);

    VeggieMix veggies;
    veggies.add(std::make_shared<Cheese>());

    std::cout << "Ingredients in Meat Combo: ";
    meaty.display();
    std::cout << std::endl;

    std::cout << "Ingredients in Veggie Mix: ";
    veggies.display();
    std::cout << std::endl;

    return 0;
}
