//
// Created by ray on 8/29/23.
//

#ifndef EXAMPLE_TARGET_H
#define EXAMPLE_TARGET_H
#include <iostream>

class Target {
public:
    virtual ~Target() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};
#endif //EXAMPLE_TARGET_H
