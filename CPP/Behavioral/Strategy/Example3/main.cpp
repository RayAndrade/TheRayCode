#include "Juggler.h"
#include "JuggleBalls.h"
#include "JuggleKnives.h"
#include "JuggleChainsaws.h"
#include <iostream>

int main() {
    Juggler jerry(std::make_unique<JuggleBalls>());
    std::cout << "First act: ";
    jerry.perform();

    std::cout << "Switching to a more dangerous act: ";
    jerry.setStrategy(std::make_unique<JuggleKnives>());
    jerry.perform();

    std::cout << "For the grand finale: ";
    jerry.setStrategy(std::make_unique<JuggleChainsaws>());
    jerry.perform();
    return 0;
}
