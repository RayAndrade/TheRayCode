using System;
using System.Collections.Generic;

namespace Interpreter
{
    public class ExpressionParser
    {
        public IExpression Parse(string input)
        {
            var tokens = input.Split(' ');
            var stack = new Stack<IExpression>();

            for (int i = 0; i < tokens.Length; i++)
            {
                switch (tokens[i])
                {
                    case "+":
                        var leftAdd = stack.Pop();
                        var rightAdd = new NumberExpression(Convert.ToInt32(tokens[++i]));
                        stack.Push(new AddExpression(leftAdd, rightAdd));
                        break;

                    case "-":
                        var leftSub = stack.Pop();
                        var rightSub = new NumberExpression(Convert.ToInt32(tokens[++i]));
                        stack.Push(new SubtractExpression(leftSub, rightSub));
                        break;

                    default:
                        stack.Push(new NumberExpression(Convert.ToInt32(tokens[i])));
                        break;
                }
            }

            return stack.Pop();

        }
    }
}
