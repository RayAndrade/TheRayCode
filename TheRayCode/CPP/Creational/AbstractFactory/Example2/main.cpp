#include <iostream>
#include <memory>
#include "DomesticAnimalFactory.h"
#include "WildAnimalFactory.h"

int main() {
    // Create a domestic animal factory
    std::unique_ptr<AnimalFactory> domesticFactory = std::make_unique<DomesticAnimalFactory>();

    // Create domestic animals
    std::unique_ptr<Dog> domesticDog(domesticFactory->createDog());
    std::unique_ptr<Cat> domesticCat(domesticFactory->createCat());

    // Interact with domestic animals
    std::cout << domesticDog->makeSound() << " I am a " << domesticDog->getName() << std::endl;
    std::cout << domesticCat->makeSound() << " I am a " << domesticCat->getName() << std::endl;

    // Create a wild animal factory
    std::unique_ptr<AnimalFactory> wildFactory = std::make_unique<WildAnimalFactory>();

    // Create wild animals
    std::unique_ptr<Dog> wildDog(wildFactory->createDog());
    std::unique_ptr<Cat> wildCat(wildFactory->createCat());

    // Interact with wild animals
    std::cout << wildDog->makeSound() << " I am a " << wildDog->getName() << std::endl;
    std::cout << wildCat->makeSound() << " I am a " << wildCat->getName() << std::endl;

    return 0;
}