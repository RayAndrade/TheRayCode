//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_UFOTRACKER_H
#define EXAMPLE3_UFOTRACKER_H

#include <iostream>

class UFOTracker {
public:
    void turnOn() {
        std::cout << "UFOTracker is online. Tracking unidentified flying objects and dodgy drones." << std::endl;
    }

    void turnOff() {
        std::cout << "UFOTracker is off. The UFOs are now unmonitored; they're throwing a party." << std::endl;
    }
};

#endif //EXAMPLE3_UFOTRACKER_H
