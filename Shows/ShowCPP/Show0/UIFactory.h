//
// Created by ray on 6/29/23.
//

#ifndef SHOW0_UIFACTORY_H
#define SHOW0_UIFACTORY_H

#include "Button.h"
#include "Scrollbar.h"

class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
};

#endif //SHOW0_UIFACTORY_H
