//
// Created by ray on 8/18/20.
//

#ifndef SHOW_MEDIATOR_H
#define SHOW_MEDIATOR_H
#include <string>

class BaseComponent;
class Mediator {
public:
    virtual void Notify(BaseComponent *sender, std::string event) const = 0;
};

#endif //SHOW_MEDIATOR_H
