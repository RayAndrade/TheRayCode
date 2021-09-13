//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_PRODUCTB1_H
#define ABSTRACTFACTORY_PRODUCTB1_H
#include "OperationManager.h"

class IBMOperation : public OperationManager {
public:
    std::string UsefulFunction2() const override {
        return "The result of IBMOperation.";
    }
    std::string AnotherUsefulFunctionB(const ConfigurationManager &collaborator) const override {
        const std::string result = collaborator.UsefulFunctionA();
        return "The result of IBMConfigurationManager collaborating with ( " + result + " )";
    }
};
#endif //ABSTRACTFACTORY_PRODUCTB1_H
