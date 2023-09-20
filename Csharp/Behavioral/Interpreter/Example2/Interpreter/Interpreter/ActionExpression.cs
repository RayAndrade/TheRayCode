namespace Interpreter
{
    public class ActionExpression : IExpression
    {
        private readonly string _action;

        public ActionExpression(string action)
        {
            _action = action;
        }
        
        public void Interpret(Context context)
        {
            context.Output += " " + _action;
        }
    }
}