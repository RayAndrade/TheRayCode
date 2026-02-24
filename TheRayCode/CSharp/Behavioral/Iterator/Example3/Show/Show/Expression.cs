using System.Runtime.Remoting.Contexts;

namespace Show
{
    public abstract class Expression
    {
        public abstract string Interpret(Context context);
    }
}