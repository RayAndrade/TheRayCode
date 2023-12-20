using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            IExpression threeSheep = new CountSheepExpression(3);
            Console.WriteLine(threeSheep.Interpret());

            IExpression fiveSheep = new CountSheepExpression(5);
            Console.WriteLine(fiveSheep.Interpret());
        }
    }
}