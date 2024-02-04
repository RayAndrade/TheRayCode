//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_GAMECONSOLE_H
#define EXAMPLE2_GAMECONSOLE_H

#include <iostream>

#include <iostream>

class GameConsole {
public:
    void turnOn() {
        std::cout << "GameConsole is booting up, preparing epic quests and adventures." << std::endl;
    }

    void turnOff() {
        std::cout << "GameConsole is shutting down, saving the realm for another day." << std::endl;
    }
};


#endif //EXAMPLE2_GAMECONSOLE_H
