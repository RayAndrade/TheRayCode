//
// Created by ray on 8/25/20.
//

#ifndef FACADE_SYSTEMA_H
#define FACADE_SYSTEMA_H
#include <iostream>

class SystemA {
public:
    std::string OperationA() const {
        return "SystemA: Ready!\n";
    }
    // ...
    std::string OperationN() const {
        return "SystemA: Go!\n";
    }
};


#endif //FACADE_SYSTEMA_H
