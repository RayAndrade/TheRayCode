//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_LIGHT_H
#define EXAMPLE3_LIGHT_H

#include <iostream>

// Receiver class
class Light {
public:
    void on() {
        std::cout << "Light is on. Let there be light!" << std::endl;
    }

    void off() {
        std::cout << "Light is off. Hello darkness, my old friend." << std::endl;
    }
};


#endif //EXAMPLE3_LIGHT_H
