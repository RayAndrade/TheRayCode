//
// Created by ray on 5/19/23.
//

#ifndef DEMO_UIFACTORY_H
#define DEMO_UIFACTORY_H

#include "Button.h"
#include "Scrollbar.h"

class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
};

#endif //DEMO_UIFACTORY_H
