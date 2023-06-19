//
// Created by ray on 6/19/23.
//

#ifndef SHOWCPP_UIFACTORY_H
#define SHOWCPP_UIFACTORY_H

#include "Button.h"
#include "Scrollbar.h"

class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
};

#endif //SHOWCPP_UIFACTORY_H
