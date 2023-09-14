//
// Created by ray on 8/29/23.
//

#ifndef EXAMPLE_ADAPTER_H
#define EXAMPLE_ADAPTER_H

#include <algorithm>
#include "Adaptee.h"

class Adapter : public Target{
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

#endif //EXAMPLE_ADAPTER_H
