//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE3_EXPRESSION_H
#define EXAMPLE3_EXPRESSION_H

#include <string>

class Expression {
public:
    virtual ~Expression() {}
    virtual std::string interpret() const = 0;  // abstract interpret method
};

#endif //EXAMPLE3_EXPRESSION_H
