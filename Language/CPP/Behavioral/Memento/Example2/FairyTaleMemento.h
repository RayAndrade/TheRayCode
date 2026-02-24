//
// Created by ray on 9/21/23.
//

#ifndef EXAMPLE2_FAIRYTALEMEMENTO_H
#define EXAMPLE2_FAIRYTALEMEMENTO_H

#include <string>

class FairyTaleMemento {
private:
    std::string tale;

public:
    FairyTaleMemento(const std::string &t) : tale(t) {}

    std::string getTale() const {
        return tale;
    }
};

#endif //EXAMPLE2_FAIRYTALEMEMENTO_H
