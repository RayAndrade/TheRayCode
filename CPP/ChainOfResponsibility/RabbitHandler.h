#ifndef CHAINOFRESPONSIBILITY_RABBITHANDLER_H
#define CHAINOFRESPONSIBILITY_RABBITHANDLER_H
#include "AbstractHandler.h"

class RabbitHandler: public AbstractHandler {
public:
    std::string Handle(std::string request)  {
        if (request == "Carrot") {
            return "Rabbit: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};


#endif //CHAINOFRESPONSIBILITY_RABBITHANDLER_H
