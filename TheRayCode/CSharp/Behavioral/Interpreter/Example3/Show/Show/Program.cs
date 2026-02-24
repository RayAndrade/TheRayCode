using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IExpression left = new NumberExpression(10);
            IExpression right = new NumberExpression(5);

            IExpression add = new AddExpression(left, right);
            IExpression subtract = new SubtractExpression(left, right);

            Console.WriteLine("10 + 5 = " + add.Interpret(new Context()));
            Console.WriteLine("10 - 5 = " + subtract.Interpret(new Context()));
        }
    }
}