using System.Runtime.Remoting.Contexts;

namespace Show
{
    public class SubtractExpression: IExpression
    {
        private IExpression leftExpression;
        private IExpression rightExpression;

        public SubtractExpression(IExpression left, IExpression right)
        {
            leftExpression = left;
            rightExpression = right;
        }
        
        public int Interpret(Context context)
        {
            return leftExpression.Interpret(context) - rightExpression.Interpret(context);
        }
    }
}