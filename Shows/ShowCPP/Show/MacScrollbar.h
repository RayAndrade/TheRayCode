//
// Created by ray on 6/21/23.
//

#ifndef SHOWCPP_MACSCROLLBAR_H
#define SHOWCPP_MACSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class MacScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
};

#endif //SHOWCPP_MACSCROLLBAR_H
