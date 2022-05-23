//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_PRODUCTB2_H
#define ABSTRACTFACTORY_PRODUCTB2_H
#include "OperationManager.h"

class UnisysOperation : public OperationManager {
public:
    std::string UsefulFunction2() const override {
        return "The result of UnisysOperation.";
    }
    std::string AnotherUsefulFunctionB(const ConfigurationManager &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of UnisysConfigurationManager collaborating with ( " + result + " )";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTB2_H
