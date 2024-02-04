//
// Created by ray on 2/3/24.
//

#ifndef EXAMPLE2_FLYWEIGHTFACTORY_H
#define EXAMPLE2_FLYWEIGHTFACTORY_H

#include "ConcreteFlyweight.h"
#include <map>
#include <memory>

class FlyweightFactory {
private:
    std::map<std::string, std::shared_ptr<Flyweight>> flyweights;
public:
    FlyweightFactory() {
        // Pre-populate some jokes
        flyweights["tree"] = std::make_shared<ConcreteFlyweight>("Why did the tree go to the dentist? To get a root canal.");
        flyweights["bush"] = std::make_shared<ConcreteFlyweight>("Why do bushes never get lost? Because they always take the hedge path.");
    }

    std::shared_ptr<Flyweight> getFlyweight(const std::string& key) {
        if (flyweights.find(key) == flyweights.end()) {
            std::cout << "Planting a new joke-telling plant: " << key << std::endl;
            flyweights[key] = std::make_shared<ConcreteFlyweight>("This is a new plant joke for " + key);
        }
        return flyweights[key];
    }
};

#endif //EXAMPLE2_FLYWEIGHTFACTORY_H
