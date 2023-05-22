//
// Created by ray on 5/22/23.
//

#ifndef SHOW_UIFACTORY_H
#define SHOW_UIFACTORY_H

#include "Button.h"
#include "ScrollBar.h"


class UIFactory {
public:
    virtual Button* createButton() = 0;
    virtual Scrollbar* createScrollbar() = 0;
};

#endif //SHOW_UIFACTORY_H
