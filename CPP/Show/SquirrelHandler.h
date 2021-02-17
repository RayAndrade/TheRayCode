#ifndef CHAINOFRESPONSIBILITY_SQUIRRELHANDLER_H
#define CHAINOFRESPONSIBILITY_SQUIRRELHANDLER_H
#include "AbstractHandler.h"

class SquirrelHandler: public AbstractHandler {
public:
    std::string Handle(std::string request)  {
        if (request == "Nut") {
            return "Squirrel: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};


#endif //CHAINOFRESPONSIBILITY_SQUIRRELHANDLER_H
