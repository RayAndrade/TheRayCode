using System.Collections.Generic;
using System.Linq;

namespace Show
{
    public class ExpressionInterpreter
    {
        private readonly List<AbstractExpression> expressions = new List<AbstractExpression>();

        public ExpressionInterpreter()
        {
            expressions.Add(new SmileExpression());
            // Add other expressions here
        }

        public string InterpretExpressions(EmojiContext context)
        {
            return expressions.Select(expression => expression.Interpret(context)).Aggregate((current, next) => current + " " + next).Trim();
        }

    }
}