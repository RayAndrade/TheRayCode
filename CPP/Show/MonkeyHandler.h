//
// Created by ray on 12/21/20.
//

#ifndef SHOW_MONKEYHANDLER_H
#define SHOW_MONKEYHANDLER_H
#include "AbstractHandler.h"

class MonkeyHandler : public AbstractHandler  {

public:
    std::string Handle(std::string request)  {
        if (request == "Banana") {
            return "Monkey: I'll eat the " + request + ".\n";
        } else {
            return AbstractHandler::Handle(request);
        }
    }
};
#endif //SHOW_MONKEYHANDLER_H
