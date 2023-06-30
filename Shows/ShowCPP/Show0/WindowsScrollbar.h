//
// Created by ray on 6/29/23.
//

#ifndef SHOW0_WINDOWSSCROLLBAR_H
#define SHOW0_WINDOWSSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class WindowsScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "WindowsScrollbar is scrolling." << std::endl;
    }
};

#endif //SHOW0_WINDOWSSCROLLBAR_H
