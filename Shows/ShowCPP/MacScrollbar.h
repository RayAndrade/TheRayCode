//
// Created by ray on 5/22/23.
//

#ifndef SHOW_MACSCROLLBAR_H
#define SHOW_MACSCROLLBAR_H


#include "ScrollBar.h"
#include <iostream>


class MacScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
};


#endif //SHOW_MACSCROLLBAR_H
