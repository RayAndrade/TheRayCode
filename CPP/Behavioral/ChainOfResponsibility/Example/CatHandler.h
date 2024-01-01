//
// Created by ray on 12/31/23.
//

#ifndef EXAMPLE_CATHANDLER_H
#define EXAMPLE_CATHANDLER_H

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


#endif //EXAMPLE_CATHANDLER_H
