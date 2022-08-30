//
// Created by ray on 8/30/22.
//

#ifndef SHOW_LOCALDISPLAY_H
#define SHOW_LOCALDISPLAY_H

#include <iostream>

class LocalDisplay{
public:
    enum Color{
        Red = 0,
        Blue = 1,
        Green = 2,
        Yellow = 3
    };
    virtual void Message(Color color, std::string message) = 0;
};

#endif //SHOW_LOCALDISPLAY_H
