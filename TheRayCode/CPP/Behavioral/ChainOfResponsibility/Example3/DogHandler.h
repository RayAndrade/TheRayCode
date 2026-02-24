//
// Created by ray on 1/15/24.
//

#ifndef EXAMPLE3_DOGHANDLER_H
#define EXAMPLE3_DOGHANDLER_H

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

#endif //EXAMPLE3_DOGHANDLER_H
