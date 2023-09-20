//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE3_COLOREXPRESSION_H
#define EXAMPLE3_COLOREXPRESSION_H

#include "Expression.h"

class ColorExpression : public Expression {
private:
    std::string color;
public:
    ColorExpression(const std::string& col) : color(col) {}
    std::string interpret() const override { return color; }
};

#endif //EXAMPLE3_COLOREXPRESSION_H
