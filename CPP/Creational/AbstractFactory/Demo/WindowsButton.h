//
// Created by ray on 5/19/23.
//

#ifndef DEMO_WINDOWSBUTTON_H
#define DEMO_WINDOWSBUTTON_H

#include <iostream>
#include "Button.h"

class WindowsButton : public Button{
public:
    void click() override {
        std::cout << "WindowsButton scroll." << std::endl;
    }
};

#endif //DEMO_WINDOWSBUTTON_H
