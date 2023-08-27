//
// Created by ray on 8/27/23.
//

#ifndef SHOW_TARGET_H
#define SHOW_TARGET_H

#include <iostream>

class Target {
public:
    virtual ~Target() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};

#endif //SHOW_TARGET_H
