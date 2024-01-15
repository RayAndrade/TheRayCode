//
// Created by ray on 1/15/24.
//

#ifndef EXAMPLE3_CATHANDLER_H
#define EXAMPLE3_CATHANDLER_H

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
#endif //EXAMPLE3_CATHANDLER_H
