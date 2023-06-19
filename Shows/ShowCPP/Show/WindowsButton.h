//
// Created by ray on 6/19/23.
//

#ifndef SHOWCPP_WINDOWSBUTTON_H
#define SHOWCPP_WINDOWSBUTTON_H

#include "Button.h"

class WindowsButton : public Button{
public:
    void click() override {
        std::cout << "WindowsButton scroll." << std::endl;
    }
};

#endif //SHOWCPP_WINDOWSBUTTON_H
