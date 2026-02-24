#include <iostream>
#include "Expression.h"
#include "ColorExpression.h"
#include "MixExpression.h"

int main() {
    ColorExpression red("red");
    ColorExpression blue("blue");
    ColorExpression yellow("yellow");

    MixExpression mix1(red, blue);
    MixExpression mix2(blue, yellow);
    MixExpression mix3(red, yellow);

    std::cout << "Red and Blue mix to: " << mix1.interpret() << std::endl;  // Output: purple
    std::cout << "Blue and Yellow mix to: " << mix2.interpret() << std::endl;  // Output: green
    std::cout << "Red and Yellow mix to: " << mix3.interpret() << std::endl;  // Output: orange

    return 0;
}
