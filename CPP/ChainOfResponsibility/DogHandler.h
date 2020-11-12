#ifndef CHAINOFRESPONSIBILITY_DOGHANDLER_H
#define CHAINOFRESPONSIBILITY_DOGHANDLER_H

#include "AbstractHandler.h"

class DogHandler : public AbstractHandler{
public:
    std::string Handle(std::string request)  {
        if (request == "Banana") {
            return "Dog: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};


#endif //CHAINOFRESPONSIBILITY_DOGHANDLER_H
