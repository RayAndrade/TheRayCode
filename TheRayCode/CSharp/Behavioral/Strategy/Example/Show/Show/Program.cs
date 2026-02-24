using System;

namespace Show
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            var context = new Context(new ConcreteStrategyA());
            Console.WriteLine(context.ExecuteStrategy());

            context.SetStrategy(new ConcreteStrategyB());
            Console.WriteLine(context.ExecuteStrategy());
        }
    }
}