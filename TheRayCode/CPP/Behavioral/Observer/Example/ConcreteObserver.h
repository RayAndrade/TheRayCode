//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE_CONCRETEOBSERVER_H
#define EXAMPLE_CONCRETEOBSERVER_H

#include <iostream>
#include "Observer.h"

class ConcreteObserver : public Observer {
private:
    int observerState;
public:
    void update(int state) override {
        observerState = state;
        std::cout << "Observer State updated to: " << observerState << std::endl;
    }
};

#endif //EXAMPLE_CONCRETEOBSERVER_H
