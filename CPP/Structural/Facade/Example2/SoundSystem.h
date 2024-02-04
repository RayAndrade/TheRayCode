//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_SOUNDSYSTEM_H
#define EXAMPLE2_SOUNDSYSTEM_H
#include <iostream>

class SoundSystem {
public:
    void turnOn() {
        std::cout << "SoundSystem is tuning up to drop some sick beats." << std::endl;
    }

    void turnOff() {
        std::cout << "SoundSystem is now silent, pondering the sound of one hand clapping." << std::endl;
    }
};

#endif //EXAMPLE2_SOUNDSYSTEM_H
