//
// Created by ray on 6/29/23.
//

#ifndef SHOW0_WINDOWSUIFACTORY_H
#define SHOW0_WINDOWSUIFACTORY_H

#include "UIFactory.h"
#include "WindowsButton.h"
#include "WindowsScrollbar.h"

class WindowsUIFactory : public UIFactory{
public:
    Button* createButton() override {
        return new WindowsButton();
    }

    Scrollbar* createScrollbar() override {
        return new WindowsScrollbar();
    }
};

#endif //SHOW0_WINDOWSUIFACTORY_H
