//
// Created by ray on 5/19/23.
//

#ifndef DEMO_MACBUTTON_H
#define DEMO_MACBUTTON_H

#include <iostream>
#include "Button.h"

class  MacButton : public Button{
public:
    void click() override {
        std::cout << "MacButton click." << std::endl;
    }
};

#endif //DEMO_MACBUTTON_H
