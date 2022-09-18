#ifndef CHAINOFRESPONSIBILITY_CATHANDLER_H
#define CHAINOFRESPONSIBILITY_CATHANDLER_H
#include "AbstractHandler.h"

class CatHandler: public AbstractHandler {
public:
    std::string Handle(std::string request)  {
        if (request == "Catnip") {
            return "Cat: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};


#endif //CHAINOFRESPONSIBILITY_CATHANDLER_H
