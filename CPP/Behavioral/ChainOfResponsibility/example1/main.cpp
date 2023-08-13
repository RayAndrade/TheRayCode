#include <iostream>

#include "Teenager.h"
#include "Parent.h"
#include "Robot.h"

int main() {
    auto teen = std::make_shared<Teenager>();
    auto parent = std::make_shared<Parent>();
    auto robot = std::make_shared<Robot>();

    teen->setNext(parent);
    parent->setNext(robot);

    std::cout << "Attempting to wash a Plate:\n";
    teen->washDishes("Plate");

    std::cout << "\nAttempting to wash a Glass:\n";
    teen->washDishes("Glass");
    return 0;
}
