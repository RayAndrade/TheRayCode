//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_ENTERTAINMENTFACADE_H
#define EXAMPLE2_ENTERTAINMENTFACADE_H

#include "TV.h"
#include "SoundSystem.h"
#include "GameConsole.h"

class EntertainmentFacade {
private:
    TV tv;
    SoundSystem soundSystem;
    GameConsole gameConsole;

public:
    void startGamingSession() {
        std::cout << "Initiating an epic gaming session. Brace yourselves!" << std::endl;
        tv.turnOn();
        soundSystem.turnOn();
        gameConsole.turnOn();
        std::cout << "All systems go. Let the games begin!" << std::endl;
    }

    void endGamingSession() {
        std::cout << "Ending the gaming session. Reality awaits..." << std::endl;
        gameConsole.turnOff();
        soundSystem.turnOff();
        tv.turnOff();
        std::cout << "Welcome back to the real world!" << std::endl;
    }
};

#endif //EXAMPLE2_ENTERTAINMENTFACADE_H
