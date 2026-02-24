using System.Runtime.Remoting.Contexts;

namespace Show
{
    public interface IExpression
    {
        int Interpret(Context context);
    }
}