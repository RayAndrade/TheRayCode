//
// Created by ray on 6/29/23.
//

#ifndef SHOW0_WINDOWSBUTTON_H
#define SHOW0_WINDOWSBUTTON_H

#include <iostream>
#include "Button.h"

class WindowsButton : public Button{
public:
    void click() override {
        std::cout << "WindowsButton CLICK!!." << std::endl;
    }
};

#endif //SHOW0_WINDOWSBUTTON_H
