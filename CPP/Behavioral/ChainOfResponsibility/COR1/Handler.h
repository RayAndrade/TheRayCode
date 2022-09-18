#ifndef CHAINOFRESPONSIBILITY_HANDLER_H
#define CHAINOFRESPONSIBILITY_HANDLER_H

#include <iostream>

class Handler {
public:
    virtual Handler *SetNext(Handler *handler) = 0;
    virtual std::string Handle(std::string request) = 0;
};


#endif //CHAINOFRESPONSIBILITY_HANDLER_H
