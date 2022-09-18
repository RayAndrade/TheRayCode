//
// Created by ray on 8/7/22.
//

#ifndef AR2_LOCALDISPLAY_H
#define AR2_LOCALDISPLAY_H

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

#endif //AR2_LOCALDISPLAY_H
