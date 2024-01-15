//
// Created by ray on 1/12/24.
//

#ifndef EXAMPLE2_GRANDMOTHER_H
#define EXAMPLE2_GRANDMOTHER_H

#include "Listener.h"

class Grandmother : public Listener {
public:
    void shareFeelings(const std::string& feeling) override {
        std::cout << "Grandmother: I've seen many things, felt many pains. Come, let's talk...\n";
    }
};

#endif //EXAMPLE2_GRANDMOTHER_H
