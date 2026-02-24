//
// Created by ray on 9/20/23.
//

#ifndef EXAMPLE2_EXPRESSION_H
#define EXAMPLE2_EXPRESSION_H

class Expression {
public:
    virtual ~Expression() {}
    virtual int interpret() const = 0;  // abstract interpret method
};

#endif //EXAMPLE2_EXPRESSION_H
