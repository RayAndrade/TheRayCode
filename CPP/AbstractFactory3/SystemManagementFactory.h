//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_ABSTRACTFACTORY_H
class SystemManagementFactory {
public:
    virtual ConfigurationManager *CreateProductA() const = 0;
    virtual OperationManager *CreateProductB() const = 0;
};
#endif //ABSTRACTFACTORY_ABSTRACTFACTORY_H
