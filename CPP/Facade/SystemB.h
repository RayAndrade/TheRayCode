//
// Created by ray on 8/25/20.
//

#ifndef FACADE_SYSTEMB_H
#define FACADE_SYSTEMB_H
#include <iostream>

class SystemB {
public:
    std::string OperationA() const {
        return "SystemB: Get ready!\n";
    }
    // ...
    std::string OperationZ() const {
        return "SystemB: Fire!\n";
    }
};


#endif //FACADE_SYSTEMB_H
