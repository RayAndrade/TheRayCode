//
// Created by ray on 5/15/23.
//

#ifndef SHOW_WINDOWSBUTTON_H
#define SHOW_WINDOWSBUTTON_H

#include "Button.h"

class WindowsButton : public Button {
public:
    void click() override {
        std::cout << "WindowsButton click." << std::endl;
    }
};

#endif //SHOW_WINDOWSBUTTON_H
