//
// Created by ray on 6/29/23.
//

#ifndef SHOW0_MACUIFACTORY_H
#define SHOW0_MACUIFACTORY_H

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

#endif //SHOW0_MACUIFACTORY_H
