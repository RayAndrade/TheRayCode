//
// Created by ray on 6/29/23.
//

#ifndef SHOW0_MACSCROLLBAR_H
#define SHOW0_MACSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class MacScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "MacScrollbar scrolled." << std::endl;
    }
};

#endif //SHOW0_MACSCROLLBAR_H
