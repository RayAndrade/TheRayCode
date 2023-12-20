using System.Runtime.Remoting.Contexts;

namespace Show
{
    public class NumberExpression: IExpression
    {
        private int number;

        public NumberExpression(int number)
        {
            this.number = number;
        }
        
        public int Interpret(Context context)
        {
            return number;
        }
    }
}