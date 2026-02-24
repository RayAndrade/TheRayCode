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
