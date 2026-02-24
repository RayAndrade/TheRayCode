//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_TV_H
#define EXAMPLE3_TV_H

#include <iostream>

// Another Receiver class
class TV {
public:
    void on() {
        std::cout << "TV is on. Welcome to the endless entertainment!" << std::endl;
    }

    void off() {
        std::cout << "TV is off. Back to reality..." << std::endl;
    }

    void changeChannel() {
        std::cout << "Changing the TV channel. What's on the other channel?" << std::endl;
    }
};


#endif //EXAMPLE3_TV_H
