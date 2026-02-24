//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE2_GAMINGCOMPUTER_H
#define EXAMPLE2_GAMINGCOMPUTER_H

#include "Computer.h"

class GamingComputer : public Computer {
public:
    void addRAM() override {
        std::cout << "Installing 32GB high-frequency RAM" << std::endl;
    }

    void addStorage() override {
        std::cout << "Installing 1TB NVMe SSD" << std::endl;
    }

    void installOS() override {
        std::cout << "Installing Windows 11" << std::endl;
    }
};


#endif //EXAMPLE2_GAMINGCOMPUTER_H
