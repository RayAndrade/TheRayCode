using System;

namespace Interpreter
{
    public class ExpressionParser
    {
        public IExpression Parse(string input)
        {
            var tokens = input.Split(' ');

            if (tokens.Length != 2)
                throw new ArgumentException("Invalid command");

            IExpression animalExpression = new AnimalExpression(tokens[0]);
            IExpression actionExpression = new ActionExpression(tokens[1]);

            return new CommandExpression(animalExpression, actionExpression);
        }

    }
}