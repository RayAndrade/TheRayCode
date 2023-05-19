//
// Created by ray on 5/19/23.
//

#ifndef SHOW_MACUIFACTORY_H
#define SHOW_MACUIFACTORY_H

#include "UIFactory.h"
#include "MacButton.h"
#include "MacScrollbar.h"

class MacUIFactory : public UIFactory{
public:
    Button* createButton() override {
        return new MacButton();
    }

    Scrollbar* createScrollbar() override {
        return new MacScrollbar();
    }
};

#endif //SHOW_MACUIFACTORY_H
