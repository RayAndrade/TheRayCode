//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE_NUMBER_H
#define EXAMPLE_NUMBER_H

#include "Expression.h"

class Number : public Expression {
private:
    int value;

public:
    Number(int value) : value(value) {}
    int interpret(Context& context) override {
        return value;
    }
};

#endif //EXAMPLE_NUMBER_H
