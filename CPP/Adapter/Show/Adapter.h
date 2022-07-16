//
// Created by ray on 7/13/22.
//

#ifndef SHOW_ADAPTER_H
#define SHOW_ADAPTER_H

#include "Adaptee.h"
#include "Target.h"

class Adapter : public Target {
private:
    Adaptee *adaptee_;

public:
    Adapter(Adaptee *adaptee) : adaptee_(adaptee) {}
    std::string Request() const override {
        std::string to_reverse = this->adaptee_->SpecificRequest();
        std::reverse(to_reverse.begin(), to_reverse.end());
        return "Adapter: (TRANSLATED) " + to_reverse;
    }
};

#endif //SHOW_ADAPTER_H
