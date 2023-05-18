//
// Created by ray on 5/18/23.
//

#ifndef SHOW_MACBUTTON_H
#define SHOW_MACBUTTON_H

#include <iostream>
#include "Button.h"

class  MacButton : public Button {
public:
    void click() override {
        std::cout << "MacButton click." << std::endl;
    }
};

#endif //SHOW_MACBUTTON_H
