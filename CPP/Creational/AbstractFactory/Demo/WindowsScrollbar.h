//
// Created by ray on 5/19/23.
//

#ifndef DEMO_WINDOWSSCROLLBAR_H
#define DEMO_WINDOWSSCROLLBAR_H

#include <iostream>
#include "Scrollbar.h"

class WindowsScrollbar : public Scrollbar{
public:
    void scroll() override {
        std::cout << "WindowsScrollbar scroll." << std::endl;
    }
};

#endif //DEMO_WINDOWSSCROLLBAR_H
