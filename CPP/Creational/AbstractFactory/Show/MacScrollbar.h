//
// Created by ray on 5/15/23.
//

#ifndef SHOW_MACSCROLLBAR_H
#define SHOW_MACSCROLLBAR_H


#include "Scrollbar.h"

class MacScrollbar : public Scrollbar {
public:
    void scroll() override {
        std::cout << "MacScrollbar scroll." << std::endl;
    }
};


#endif //SHOW_MACSCROLLBAR_H
