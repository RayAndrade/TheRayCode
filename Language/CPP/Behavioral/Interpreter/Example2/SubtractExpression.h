//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE2_SUBTRACTEXPRESSION_H
#define EXAMPLE2_SUBTRACTEXPRESSION_H

#include "Expression.h"

class SubtractExpression : public Expression {
private:
    const Expression& leftExpression;
    const Expression& rightExpression;
public:
    SubtractExpression(const Expression& left, const Expression& right)
            : leftExpression(left), rightExpression(right) {}

    int interpret() const override {
        return leftExpression.interpret() - rightExpression.interpret();
    }
};

#endif //EXAMPLE2_SUBTRACTEXPRESSION_H
