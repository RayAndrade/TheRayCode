//
// Created by ray on 8/25/20.
//

#ifndef FACADE_SYSTEM1_H
#define FACADE_SYSTEM1_H
#include <iostream>

class System1 {
public:
    std::string Operation1() const {
        return "System1: Ready!\n";
    }
    // ...
    std::string OperationN() const {
        return "System1: Go!\n";
    }
};


#endif //FACADE_SYSTEM1_H
