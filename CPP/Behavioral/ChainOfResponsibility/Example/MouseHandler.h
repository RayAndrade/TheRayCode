//
// Created by ray on 12/31/23.
//

#ifndef EXAMPLE_MOUSEHANDLER_H
#define EXAMPLE_MOUSEHANDLER_H

#include "AbstractHandler.h"

class MouseHandler: public AbstractHandler {
public:
    std::string Handle(std::string request)  {
        if (request == "Cheese") {
            return "Mouse: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
#endif //EXAMPLE_MOUSEHANDLER_H
