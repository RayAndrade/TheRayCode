//
// Created by ray on 8/12/23.
//

#ifndef EXAMPLE2_MOTHER_H
#define EXAMPLE2_MOTHER_H

#include "Listener.h"

class Mother : public Listener {
public:
    void shareFeelings(const std::string& feeling) override {
        if (feeling == "loss") {
            std::cout << "Mother: I've experienced loss too, but I'm overwhelmed...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        } else {
            std::cout << "Mother: I wish I could help, but I have my own sorrows...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        }
    }
};

#endif //EXAMPLE2_MOTHER_H
