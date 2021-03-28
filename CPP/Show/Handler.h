//
// Created by ray on 12/21/20.
//

#ifndef SHOW_HANDLER_H
#define SHOW_HANDLER_H

#include <iostream>

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};

#endif //SHOW_HANDLER_H
