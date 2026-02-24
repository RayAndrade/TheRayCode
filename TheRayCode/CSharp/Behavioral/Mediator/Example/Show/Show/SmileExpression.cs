using System.Runtime.Remoting.Contexts;

namespace Show
{
    public class SmileExpression: Expression
    {
        public override string Interpret(Context context)
        {
            return context.Input.Replace("smile", "😊");
        }
    }
}