//
// Created by ray on 1/15/24.
//

#ifndef EXAMPLE3_MOUSEHANDLER_H
#define EXAMPLE3_MOUSEHANDLER_H

#include "AbstractHandler.h"

class MouseHandler : public AbstractHandler  {
public:
    std::string Handle(std::string request)  {
        if (request == "Cheese") {
            return "Mouse: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};

#endif //EXAMPLE3_MOUSEHANDLER_H
