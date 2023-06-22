//
// Created by ray on 6/21/23.
//

#ifndef SHOWCPP_WINDOWSUIFACTORY_H
#define SHOWCPP_WINDOWSUIFACTORY_H

#include "UIFactory.h"
#include "WindowsButton.h"
#include "WindowsScrollbar.h"

class WindowsUIFactory: public UIFactory {
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Scrollbar* createScrollbar() override {
        return new WindowsScrollbar();
    }
};

#endif //SHOWCPP_WINDOWSUIFACTORY_H
