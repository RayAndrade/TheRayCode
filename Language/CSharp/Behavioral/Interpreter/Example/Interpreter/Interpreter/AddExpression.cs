namespace Interpreter
{
    public class AddExpression: IExpression
    {
        private readonly IExpression _leftExpression;
        private readonly IExpression _rightExpression;

        public AddExpression(IExpression left, IExpression right)
        {
            _leftExpression = left;
            _rightExpression = right;
        }
        public int Interpret()
        {
            return _leftExpression.Interpret() + _rightExpression.Interpret();
        }
    }
}