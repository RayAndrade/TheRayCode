//
// Created by ray on 6/21/23.
//

#ifndef SHOWCPP_MACUIFACTORY_H
#define SHOWCPP_MACUIFACTORY_H

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


#endif //SHOWCPP_MACUIFACTORY_H
