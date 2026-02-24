//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE2_ADDEXPRESSION_H
#define EXAMPLE2_ADDEXPRESSION_H

#include "Expression.h"

class AddExpression : public Expression {
private:
    const Expression& leftExpression;
    const Expression& rightExpression;
public:
    AddExpression(const Expression& left, const Expression& right)
            : leftExpression(left), rightExpression(right) {}

    int interpret() const override {
        return leftExpression.interpret() + rightExpression.interpret();
    }
};

#endif //EXAMPLE2_ADDEXPRESSION_H
