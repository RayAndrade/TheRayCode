//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE_ADD_H
#define EXAMPLE_ADD_H

#include "Expression.h"

class Add : public Expression {
private:
    Expression* left;
    Expression* right;

public:
    Add(Expression* left, Expression* right) : left(left), right(right) {}
    ~Add() {
        delete left;
        delete right;
    }
    int interpret(Context& context) override {
        return left->interpret(context) + right->interpret(context);
    }
};

#endif //EXAMPLE_ADD_H
