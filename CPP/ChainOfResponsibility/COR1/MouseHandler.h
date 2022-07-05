//
// Created by ray on 8/15/20.
//

#ifndef CHAINOFRESPONSIBILITY_MOUSEHANDLER_H
#define CHAINOFRESPONSIBILITY_MOUSEHANDLER_H

#include "AbstractHandler.h"

class MouseHandler : public AbstractHandler  {

public:
    std::string Handle(std::string request)  {
        if (request == "Cheese") {
            return "Mouse: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};


#endif //CHAINOFRESPONSIBILITY_MOUSEHANDLER_H
