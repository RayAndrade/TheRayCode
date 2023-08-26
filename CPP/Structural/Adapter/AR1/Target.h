//
// Created by ray on 8/25/23.
//

#ifndef ADAPTER_TARGET_H
#define ADAPTER_TARGET_H

#include <iostream>

class Target {
public:
    virtual ~Target() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};

#endif //ADAPTER_TARGET_H
