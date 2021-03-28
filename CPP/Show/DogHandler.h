//
// Created by ray on 12/21/20.
//

#ifndef SHOW_DOGHANDLER_H
#define SHOW_DOGHANDLER_H

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


#endif //SHOW_DOGHANDLER_H
