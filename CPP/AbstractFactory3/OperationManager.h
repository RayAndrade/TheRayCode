//
// Created by ray on 9/11/21.
//

#ifndef ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
#define ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
class OperationManager {
public:
    ~OperationManager(){};
    virtual std::string UsefulFunction2() const = 0;
    virtual std::string AnotherUsefulFunctionB(const ConfigurationManager &collaborator) const = 0;
};

#endif //ABSTRACTFACTORY_ABSTRACTPRODUCTB_H
