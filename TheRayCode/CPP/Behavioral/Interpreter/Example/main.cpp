#include <iostream>
#include "Number.h"
#include "Add.h"
#include "Subtract.h"
#include "Context.h"

int main() {
    Context context;

    // Constructing the expression 1 + 2 - 3
    Expression* expression = new Subtract(new Add(new Number(1), new Number(2)), new Number(3));
    std::cout << "Result: " << expression->interpret(context) << std::endl; // Should print 0

    delete expression;

    return 0;
}
