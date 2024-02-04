//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_TV_H
#define EXAMPLE2_TV_H

#include <iostream>

class TV {
public:
    void turnOn() {
        std::cout << "TV is warming up to display pixels of destiny." << std::endl;
    }

    void turnOff() {
        std::cout << "TV is cooling down, dreaming of electric sheep." << std::endl;
    }
};

#endif //EXAMPLE2_TV_H
