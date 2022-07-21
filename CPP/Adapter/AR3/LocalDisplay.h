//
// Created by ray on 7/15/22.
//

#ifndef AR3_LOCALDISPLAY_H
#define AR3_LOCALDISPLAY_H

#include <iostream>

class LocalDisplay{
public:
    enum Color{
        Red = 0,
        Blue,
        Green,
        Yellow
    };
    virtual void Message(Color color, std::string message) = 0;
};

#endif //AR3_LOCALDISPLAY_H
