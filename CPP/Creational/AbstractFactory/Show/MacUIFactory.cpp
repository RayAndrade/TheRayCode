//
// Created by ray on 5/18/23.
//
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