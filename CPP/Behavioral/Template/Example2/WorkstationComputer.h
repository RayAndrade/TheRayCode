//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE2_WORKSTATIONCOMPUTER_H
#define EXAMPLE2_WORKSTATIONCOMPUTER_H

#include "Computer.h"

class WorkstationComputer : public Computer {
public:
    void addRAM() override {
        std::cout << "Installing 64GB ECC RAM" << std::endl;
    }

    void addStorage() override {
        std::cout << "Installing 2x 2TB NVMe SSD in RAID 1" << std::endl;
    }

    void installOS() override {
        std::cout << "Installing Linux" << std::endl;
    }
};

#endif //EXAMPLE2_WORKSTATIONCOMPUTER_H
