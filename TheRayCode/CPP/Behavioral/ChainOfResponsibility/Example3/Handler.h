//
// Created by ray on 1/15/24.
//

#ifndef EXAMPLE3_HANDLER_H
#define EXAMPLE3_HANDLER_H

#include <iostream>

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};

#endif //EXAMPLE3_HANDLER_H
