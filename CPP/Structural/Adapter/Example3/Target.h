//
// Created by ray on 2026-01-27.
//

#ifndef EXAMPLE3_TARGET_H
#define EXAMPLE3_TARGET_H
#include <iostream>

class Target {
public:
    virtual ~Target() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};

#endif //EXAMPLE3_TARGET_H