//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE_EXPRESSION_H
#define EXAMPLE_EXPRESSION_H

class Context;

class Expression {
public:
    virtual ~Expression() = default;
    virtual int interpret(Context& context) = 0;
};


#endif //EXAMPLE_EXPRESSION_H
