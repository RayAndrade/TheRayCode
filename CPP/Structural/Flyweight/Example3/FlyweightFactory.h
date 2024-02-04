//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE3_FLYWEIGHTFACTORY_H
#define EXAMPLE3_FLYWEIGHTFACTORY_H

#include "ConcreteFlyweight.h"
#include <map>
#include <memory>

class FlyweightFactory {
private:
    std::map<std::string, std::shared_ptr<Flyweight>> flyweights;
public:
    std::shared_ptr<Flyweight> getFlyweight(const std::string& color) {
        if (flyweights.find(color) == flyweights.end()) {
            flyweights[color] = std::make_shared<ConcreteFlyweight>(color);
            std::cout << "Creating a circle of color: " << color << std::endl;
        }
        return flyweights[color];
    }
};

#endif //EXAMPLE3_FLYWEIGHTFACTORY_H
