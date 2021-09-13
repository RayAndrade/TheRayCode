//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_PRODUCTA2_H
#define ABSTRACTFACTORY_PRODUCTA2_H
#include "ConfigurationManager.h"

class UnisysConfiguration : public ConfigurationManager {
    std::string UsefulFunctionA() const override {
        return "UnisysConfiguration.";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTA2_H
