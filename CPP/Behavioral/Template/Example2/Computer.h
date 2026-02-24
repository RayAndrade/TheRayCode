//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE2_COMPUTER_H
#define EXAMPLE2_COMPUTER_H

#include <iostream>

class Computer {
public:
    // Template method
    void assembleComputer() {
        attachMotherboard();
        insertProcessor();
        addRAM();
        addStorage();
        installOS();
    }

    void attachMotherboard() {
        std::cout << "Attaching the motherboard to the case" << std::endl;
    }

    void insertProcessor() {
        std::cout << "Inserting the processor into the motherboard" << std::endl;
    }

    // Abstract methods to be implemented by derived classes
    virtual void addRAM() = 0;
    virtual void addStorage() = 0;
    virtual void installOS() = 0;

    virtual ~Computer() {} // Virtual destructor for cleanup
};

#endif //EXAMPLE2_COMPUTER_H
