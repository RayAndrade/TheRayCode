//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE3_MIXEXPRESSION_H
#define EXAMPLE3_MIXEXPRESSION_H

#include "Expression.h"

class MixExpression : public Expression {
private:
    const Expression& color1;
    const Expression& color2;
public:
    MixExpression(const Expression& c1, const Expression& c2) : color1(c1), color2(c2) {}

    std::string interpret() const override {
        std::string mix = color1.interpret() + "-" + color2.interpret();
        if (mix == "red-blue" || mix == "blue-red") return "purple";
        if (mix == "blue-yellow" || mix == "yellow-blue") return "green";
        if (mix == "red-yellow" || mix == "yellow-red") return "orange";
        return "unknown";
    }
};

#endif //EXAMPLE3_MIXEXPRESSION_H
