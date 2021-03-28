
#ifndef ADAPTER_TARGET_H
#define ADAPTER_TARGET_H
#include <iostream>

/**
 * The Target defines the domain-specific interface used by the client code.
 */
class Target {
public:
    virtual ~Target() = default;

    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};

#endif //ADAPTER_TARGET_H
