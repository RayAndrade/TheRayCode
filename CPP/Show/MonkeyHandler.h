//
// Created by ray on 8/15/20.
//

#ifndef CHAINOFRESPONSIBILITY_MONKEYHANDLER_H
#define CHAINOFRESPONSIBILITY_MONKEYHANDLER_H

#include "AbstractHandler.h"

class MonkeyHandler : public AbstractHandler  {

public:
    std::string Handle(std::string request)  {
        if (request == "Banana") {
            return "Monkey: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};


#endif //CHAINOFRESPONSIBILITY_MONKEYHANDLER_H
