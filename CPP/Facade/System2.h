//
// Created by ray on 8/25/20.
//

#ifndef FACADE_SYSTEM2_H
#define FACADE_SYSTEM2_H
#include <iostream>

class System2 {
public:
    std::string Operation1() const {
        return "System2: Get ready!\n";
    }
    // ...
    std::string OperationZ() const {
        return "System2: Fire!\n";
    }
};


#endif //FACADE_SYSTEM2_H
