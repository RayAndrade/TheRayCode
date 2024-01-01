//
// Created by ray on 12/31/23.
//

#ifndef EXAMPLE_DOGHANDLER_H
#define EXAMPLE_DOGHANDLER_H

#include "AbstractHandler.h"

class DogHandler : public AbstractHandler{
public:
    std::string Handle(std::string request)  {
        if (request == "Bone") {
            return "Dog: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};

#endif //EXAMPLE_DOGHANDLER_H
