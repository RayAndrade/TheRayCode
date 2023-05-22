//
// Created by ray on 5/22/23.
//

#ifndef SHOW_WINDOWSBUTTON_H
#define SHOW_WINDOWSBUTTON_H

#include <iostream>
#include "Button.h"

class WindowsButton : public Button{
public:
    void click() override {
        std::cout << "WindowsButton scroll." << std::endl;
    }
};

#endif //SHOW_WINDOWSBUTTON_H
