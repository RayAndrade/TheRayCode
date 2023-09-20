The Interpreter design pattern is used to interpret a particular language's grammar or expressions. 
For this example, I will create a simple arithmetic expression interpreter which can handle addition and subtraction.

1. **Class Order**:
   1. `Expression` (Abstract base class)
   2. `Number` (Concrete expression)
   3. `Add` (Concrete expression)
   4. `Subtract` (Concrete expression)
   5. `Context` (Information that's global to the interpreter)

2. **Classes Explanation**:
   1. `Expression`: It's an abstract base class that declares an interpret operation. All terminal and non-terminal expressions will implement this.
   2. `Number`: Represents numeric leaf nodes in our expression tree.
   3. `Add` and `Subtract`: Represents non-terminal expressions. They will have left and right `Expression` operands.
   4. `Context`: It might contain information that's global to the interpreter. In our case, it might be used to store variable name-value pairs in the future. For this simple example, it's not essential.

**Expression.h**:
```cpp
#ifndef EXPRESSION_H
#define EXPRESSION_H

class Context;

class Expression {
public:
    virtual ~Expression() = default;
    virtual int interpret(Context& context) = 0;
};

#endif // EXPRESSION_H
```

**Number.h**:
```cpp
#ifndef NUMBER_H
#define NUMBER_H

#include "Expression.h"

class Number : public Expression {
private:
    int value;

public:
    Number(int value) : value(value) {}
    int interpret(Context& context) override {
        return value;
    }
};

#endif // NUMBER_H
```

**Add.h**:
```cpp
#ifndef ADD_H
#define ADD_H

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

#endif // ADD_H
```

**Subtract.h**:
```cpp
#ifndef SUBTRACT_H
#define SUBTRACT_H

#include "Expression.h"

class Subtract : public Expression {
private:
    Expression* left;
    Expression* right;

public:
    Subtract(Expression* left, Expression* right) : left(left), right(right) {}
    ~Subtract() {
        delete left;
        delete right;
    }
    int interpret(Context& context) override {
        return left->interpret(context) - right->interpret(context);
    }
};

#endif // SUBTRACT_H
```

**Context.h**:
```cpp
// This is a placeholder for now, as our simple interpreter doesn't use it heavily.
#ifndef CONTEXT_H
#define CONTEXT_H

class Context {};

#endif // CONTEXT_H
```

**main.cpp**:
```cpp
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
```

3. **Method Explanation**:
   - `Expression::interpret()`: The main method that we would like to interpret/evaluate. This is an abstract method.
   - `Number::interpret()`: Returns its value.
   - `Add::interpret()`: Evaluates its left and right operand and returns their sum.
   - `Subtract::interpret()`: Evaluates its left and right operand and returns the result of subtracting the right operand from the left.

This is a basic example. In more complex scenarios, the context can be used to maintain variable values, and the grammar can be expanded to include multiplication, division, variables, and so on.

The program is constructing the expression `1 + 2 - 3`.

Here's the breakdown:

1. Add `1` and `2` together. Result: `3`.
2. Subtract `3` from the result of the previous step. Result: `3 - 3`.

The final result is `0`.

So, the output of the program should be:
```
Result: 0
```
