//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE_SUBTRACT_H
#define EXAMPLE_SUBTRACT_H

#include "Expression.h"

class Subtract : public Expression {
private:
    Expression* left;
    Expression* right;

public:
    Subtract(Expression* left, Expression* right) : left(left), right(right) {}
    ~Subtract() {
        delete left;
        delete right;
    }
    int interpret(Context& context) override {
        return left->interpret(context) - right->interpret(context);
    }
};

#endif //EXAMPLE_SUBTRACT_H
