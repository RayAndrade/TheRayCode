//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_TELESCOPE_H
#define EXAMPLE3_TELESCOPE_H

#include <iostream>

class Telescope {
public:
    void turnOn() {
        std::cout << "Telescope is zooming in. Ready to spot flying saucers and little green men." << std::endl;
    }

    void turnOff() {
        std::cout << "Telescope is taking a nap. Even alien hunters need rest." << std::endl;
    }
};

#endif //EXAMPLE3_TELESCOPE_H
