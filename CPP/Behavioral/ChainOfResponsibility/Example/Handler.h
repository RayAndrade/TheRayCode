//
// Created by ray on 12/31/23.
//

#ifndef EXAMPLE_HANDLER_H
#define EXAMPLE_HANDLER_H

#include <iostream>

class Handler {

public:
    virtual std::string Handle(std::string request) = 0;

    virtual Handler *SetNext(Handler *handler) = 0;
};


#endif //EXAMPLE_HANDLER_H
