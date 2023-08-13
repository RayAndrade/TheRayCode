//
// Created by ray on 8/12/23.
//

#ifndef EXAMPLE2_CHILD_H
#define EXAMPLE2_CHILD_H

#include "Listener.h"

class Child : public Listener {
public:
    void shareFeelings(const std::string& feeling) override {
        if (feeling == "loneliness") {
            std::cout << "Child: I feel lonely too, but I don't know how to help...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        } else {
            std::cout << "Child: I'm just a kid, maybe someone else will understand better...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        }
    }
};

#endif //EXAMPLE2_CHILD_H
