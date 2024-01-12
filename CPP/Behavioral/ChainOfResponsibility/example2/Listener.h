//
// Created by ray on 8/12/23.
//

#ifndef EXAMPLE2_LISTENER_H
#define EXAMPLE2_LISTENER_H

#include <iostream>
#include <memory>

class Listener {
public:
    virtual ~Listener() = default;
    void setNext(std::shared_ptr<Listener> nextListener) { this->nextListener = nextListener; }
    virtual void shareFeelings(const std::string& feeling) = 0;

protected:
    std::shared_ptr<Listener> nextListener;
};

#endif //EXAMPLE2_LISTENER_H
