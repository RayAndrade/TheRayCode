//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE2_NUMBEREXPRESSION_H
#define EXAMPLE2_NUMBEREXPRESSION_H

#include "Expression.h"

class NumberExpression : public Expression {
private:
    int number;
public:
    NumberExpression(int num) : number(num) {}
    int interpret() const override { return number; }
};

#endif //EXAMPLE2_NUMBEREXPRESSION_H
