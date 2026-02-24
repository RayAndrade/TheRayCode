#include <iostream>
#include <memory>
#include "DarkHorseFactory.h"
#include "MarvelFactory.h"
#include "DCFactory.h"


int main() {
    // Factory for Dark Horse Comics
    std::unique_ptr<ComicFactory> darkHorseFactory = std::make_unique<DarkHorseFactory>();
    std::unique_ptr<Superhero> darkHorseHero(darkHorseFactory->createSuperhero("Hellboy"));

    // Factory for Marvel Comics
    std::unique_ptr<ComicFactory> marvelFactory = std::make_unique<MarvelFactory>();
    std::unique_ptr<Superhero> marvelHero(marvelFactory->createSuperhero("Spider-Man"));

    // Factory for DC Comics
    std::unique_ptr<ComicFactory> dcFactory = std::make_unique<DCFactory>();
    std::unique_ptr<Superhero> dcHero(dcFactory->createSuperhero("Batman"));

    // Output the superheroes
    std::cout << darkHorseHero->getName() << std::endl;
    std::cout << marvelHero->getName() << std::endl;
    std::cout << dcHero->getName() << std::endl;
    return 0;
}
