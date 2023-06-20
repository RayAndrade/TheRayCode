//
// Created by ray on 6/20/23.
//

#ifndef SHOWCPP_WINDOWSSCROLLBAR_H
#define SHOWCPP_WINDOWSSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class WindowsScrollbar: public Scrollbar {
public:
    void scroll() override {
        std::cout << "WindowsScrollbar is scrolling." << std::endl;
    }
};

#endif //SHOWCPP_WINDOWSSCROLLBAR_H
