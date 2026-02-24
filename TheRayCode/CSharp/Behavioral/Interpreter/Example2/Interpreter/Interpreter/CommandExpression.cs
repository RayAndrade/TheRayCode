namespace Interpreter
{
    public class CommandExpression : IExpression
    {
        private readonly IExpression _animalExpression;
        private readonly IExpression _actionExpression;

        public CommandExpression(IExpression animal, IExpression action)
        {
            _animalExpression = animal;
            _actionExpression = action;
        }
        
        public void Interpret(Context context)
        {
            _animalExpression.Interpret(context);
            _actionExpression.Interpret(context);
        }
    }
}