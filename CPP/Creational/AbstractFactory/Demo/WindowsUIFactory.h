//
// Created by ray on 5/19/23.
//

#ifndef DEMO_WINDOWSUIFACTORY_H
#define DEMO_WINDOWSUIFACTORY_H

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

#endif //DEMO_WINDOWSUIFACTORY_H
