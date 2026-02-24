//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_RECEIVER_H
#define EXAMPLE2_RECEIVER_H

#include <iostream>

class Light {
public:
    void on() {
        std::cout << "Light is now blazing like a mini-sun!" << std::endl;
    }
};

class MusicPlayer {
public:
    void on() {
        std::cout << "Music Player is now blasting your favorite tunes!" << std::endl;
    }
};

class CoffeeMaker {
public:
    void on() {
        std::cout << "Coffee Maker is brewing some strong wake-up juice!" << std::endl;
    }
};

#endif //EXAMPLE2_RECEIVER_H
