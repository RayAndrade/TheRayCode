//
// Created by ray on 8/25/20.
//

#ifndef FACADE_SUBSYSTEM1_H
#define FACADE_SUBSYSTEM1_H
#include <iostream>

class Subsystem1 {
public:
    std::string Operation1() const {
        return "Subsystem1: Ready!\n";
    }
    // ...
    std::string OperationN() const {
        return "Subsystem1: Go!\n";
    }
};


#endif //FACADE_SUBSYSTEM1_H
