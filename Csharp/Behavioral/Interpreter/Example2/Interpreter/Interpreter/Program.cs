using System;

namespace Interpreter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            string input = "cat sleep";
            var parser = new ExpressionParser();
            var expression = parser.Parse(input);

            var context = new Context();
            expression.Interpret(context);

            Console.WriteLine(context.Output);  // Output: "cat sleep"
        }
    }
}