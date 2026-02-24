//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE2_CATDISPLAY_H
#define EXAMPLE2_CATDISPLAY_H

#include "Observer.h"
#include <iostream>

class CatDisplay : public Observer {
public:
    void update(float temperature) override {
        std::cout << "The current temperature is: " << temperature << " degrees. ";
        if(temperature > 25) {
            std::cout << "It's too hot, I'm gonna nap in the shade." << std::endl;
        } else if(temperature < 10) {
            std::cout << "Too cold, I refuse to move from this warm spot." << std::endl;
        } else {
            std::cout << "Perfect for a lazy stroll and a quick hunt." << std::endl;
        }
    }
};

#endif //EXAMPLE2_CATDISPLAY_H
