//
// Created by ray on 6/3/23.
//

#ifndef SHOW_UIFACTORY_H
#define SHOW_UIFACTORY_H

#include "Button.h"
#include "Scrollbar.h"

class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
};

#endif //SHOW_UIFACTORY_H
