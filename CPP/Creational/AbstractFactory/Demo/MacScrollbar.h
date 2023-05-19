//
// Created by ray on 5/19/23.
//

#ifndef DEMO_MACSCROLLBAR_H
#define DEMO_MACSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class MacScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
};

#endif //DEMO_MACSCROLLBAR_H
