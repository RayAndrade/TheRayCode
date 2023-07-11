//
// Created by ray on 6/29/23.
//

#ifndef SHOW0_MACBUTTON_H
#define SHOW0_MACBUTTON_H

#include <iostream>
#include "Button.h"

class  MacButton : public Button{
public:
    void click() override {
        std::cout << "MacButton clicked." << std::endl;
    }
};

#endif //SHOW0_MACBUTTON_H
