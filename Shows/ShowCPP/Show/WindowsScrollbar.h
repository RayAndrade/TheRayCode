//
// Created by ray on 6/19/23.
//

#ifndef SHOWCPP_WINDOWSSCROLLBAR_H
#define SHOWCPP_WINDOWSSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class WindowsScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "WindowsScrollbar scroll." << std::endl;
    }
};


#endif //SHOWCPP_WINDOWSSCROLLBAR_H
