//
// Created by ray on 8/27/23.
//

#ifndef ADAPTER_LOCALDISPLAY_H
#define ADAPTER_LOCALDISPLAY_H

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


#endif //ADAPTER_LOCALDISPLAY_H
