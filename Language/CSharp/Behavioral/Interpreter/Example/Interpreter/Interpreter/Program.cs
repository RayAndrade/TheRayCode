
using System;
namespace Interpreter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            string input = "5 + 3 - 2";
            var parser = new ExpressionParser();
            var expression = parser.Parse(input);

            Console.WriteLine($"{input} = {expression.Interpret()}");

        }
    }
}