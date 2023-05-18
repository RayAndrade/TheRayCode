//
// Created by ray on 5/17/23.
//

#ifndef SHOW_MACSCROLLBAR_H
#define SHOW_MACSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class MacScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
};


#endif //SHOW_MACSCROLLBAR_H
