//
// Created by ray on 6/3/23.
//

#ifndef SHOW_WINDOWSUIFACTORY_H
#define SHOW_WINDOWSUIFACTORY_H
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

#endif //SHOW_WINDOWSUIFACTORY_H
