The Interpreter design pattern provides a way to evaluate language grammar or expressions for particular languages. 
It involves building an interpreter for a defined grammar. For simplicity, I'll create an interpreter for basic arithmetic expressions that can handle addition and subtraction.

Here's how we'll proceed:

1. **`Expression.h`**: This is the abstract expression class. All other concrete expressions will inherit from this.
2. **`NumberExpression.h`**: This class will represent numeric expressions.
3. **`AddExpression.h`**: Represents addition expressions.
4. **`SubtractExpression.h`**: Represents subtraction expressions.
5. **`main.cpp`**: To demo the Interpreter pattern.

### 1. Expression.h
```cpp
// Expression.h
#ifndef _EXPRESSION_H_
#define _EXPRESSION_H_

class Expression {
public:
    virtual ~Expression() {}
    virtual int interpret() const = 0;  // abstract interpret method
};

#endif
```

### 2. NumberExpression.h
```cpp
// NumberExpression.h
#ifndef _NUMBEREXPRESSION_H_
#define _NUMBEREXPRESSION_H_

#include "Expression.h"

class NumberExpression : public Expression {
private:
    int number;
public:
    NumberExpression(int num) : number(num) {}
    int interpret() const override { return number; }
};

#endif
```

### 3. AddExpression.h
```cpp
// AddExpression.h
#ifndef _ADDEXPRESSION_H_
#define _ADDEXPRESSION_H_

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

#endif
```

### 4. SubtractExpression.h
```cpp
// SubtractExpression.h
#ifndef _SUBTRACTEXPRESSION_H_
#define _SUBTRACTEXPRESSION_H_

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

#endif
```

### 5. main.cpp
```cpp
// main.cpp
#include <iostream>
#include "Expression.h"
#include "NumberExpression.h"
#include "AddExpression.h"
#include "SubtractExpression.h"

int main() {
    // 5 + 7 - 2
    NumberExpression num1(5);
    NumberExpression num2(7);
    NumberExpression num3(2);

    AddExpression sum(num1, num2);
    SubtractExpression result(sum, num3);

    std::cout << "Result of 5 + 7 - 2: " << result.interpret() << std::endl;  // Output: 10

    return 0;
}
```

#### Explanation:

- **Expression** - Abstract class which declares the `interpret` method. All the concrete expressions should implement this method to give meaning to the expression.
  
- **NumberExpression** - Represents an integer value. Its `interpret` method just returns the integer.
  
- **AddExpression & SubtractExpression** - They are binary expressions meaning they operate on two other expressions. Their `interpret` method combines the results of the left and right expressions using addition or subtraction respectively.
  
- **main.cpp** - Here, we demo the code by creating an arithmetic expression 5 + 7 - 2, interpreting it, and then displaying the result.

To implement this interpreter pattern, create each class in the order given, then the demo in the `main.cpp` file.
