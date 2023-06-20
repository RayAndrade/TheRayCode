//
// Created by ray on 6/20/23.
//

#ifndef SHOWCPP_WINDOWSBUTTON_H
#define SHOWCPP_WINDOWSBUTTON_H

#include <iostream>
#include "Button.h"

class WindowsButton : public Button{
public:
    void click() override {
        std::cout << "WindowsButton CLICK!!." << std::endl;
    }
};

#endif //SHOWCPP_WINDOWSBUTTON_H
