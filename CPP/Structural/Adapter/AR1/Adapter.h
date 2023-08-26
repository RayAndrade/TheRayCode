//
// Created by ray on 8/25/23.
//

#ifndef ADAPTER_ADAPTER_H
#define ADAPTER_ADAPTER_H

#include <algorithm>
#include "Adaptee.h"

class Adapter  : public Target{
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

#endif //ADAPTER_ADAPTER_H
