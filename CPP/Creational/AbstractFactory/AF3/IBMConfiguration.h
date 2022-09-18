//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_PRODUCTA1_H
#define ABSTRACTFACTORY_PRODUCTA1_H
#include "ConfigurationManager.h"
class IBMConfiguration : public ConfigurationManager {
public:
    std::string UsefulFunctionA() const override {
        return "IBMConfiguration.";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTA1_H
