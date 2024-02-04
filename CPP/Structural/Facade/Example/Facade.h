#ifndef FACADE_FACADE_H
#define FACADE_FACADE_H

#include "SystemA.h"
#include "SystemB.h"


class Facade {
protected:
    SystemA *system1_;
    SystemB *system2_;
    /**
     * Depending on your application's needs, you can provide the Facade with
     * existing subsystem objects or force the Facade to create them on its own.
     */
public:
    /**
     * In this case we will delegate the memory ownership to Facade Class
     */
    Facade(
            SystemA *system1 = nullptr,
            SystemB *system2 = nullptr) {
        this->system1_ = system1 ?: new SystemA;
        this->system2_ = system2 ?: new SystemB;
    }
    ~Facade() {
        delete system1_;
        delete system2_;
    }
    /**
     * The Facade's methods are convenient shortcuts to the sophisticated
     * functionality of the subsystems. However, clients get only to a fraction of
     * a subsystem's capabilities.
     */
    std::string Operation() {
        std::string result = "Facade initializes systems:\n";
        result += this->system1_->OperationA();
        result += this->system2_->OperationA();
        result += "Facade orders systems to perform the action:\n";
        result += this->system1_->OperationN();
        result += this->system2_->OperationZ();
        return result;
    }
};


#endif //FACADE_FACADE_H
