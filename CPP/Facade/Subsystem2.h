//
// Created by ray on 8/25/20.
//

#ifndef FACADE_SUBSYSTEM2_H
#define FACADE_SUBSYSTEM2_H
#include <iostream>

class Subsystem2 {
public:
    std::string Operation1() const {
        return "Subsystem2: Get ready!\n";
    }
    // ...
    std::string OperationZ() const {
        return "Subsystem2: Fire!\n";
    }
};


#endif //FACADE_SUBSYSTEM2_H
