//
// Created by ray on 6/22/23.
//

#ifndef SHOWCPP_MACBUTTON_H
#define SHOWCPP_MACBUTTON_H

#include <iostream>
#include "Button.h"

class  MacButton: public Button {
public:
    void click() override {
        std::cout << "MacButton click." << std::endl;
    }
};

#endif //SHOWCPP_MACBUTTON_H
