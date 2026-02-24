//
// Created by ray on 3/9/24.
//

#ifndef EXAMPLE3_CONCRETEOBSERVERS_H
#define EXAMPLE3_CONCRETEOBSERVERS_H

#include "Observer.h"
#include <iostream>
//#include <string>

class Hunter : public Observer {
public:
    void update(const std::string& message_from_subject) override {
        std::cout << "Hunter sees the monster: " << message_from_subject << std::endl;
    }
};

class Villager : public Observer {
public:
    void update(const std::string& message_from_subject) override {
        std::cout << "Villager hears the monster: " << message_from_subject << std::endl;
    }
};

#endif //EXAMPLE3_CONCRETEOBSERVERS_H
