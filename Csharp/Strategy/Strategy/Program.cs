using System;
namespace TheRayCode.Strategy
{
  
    class Program
    {
        static void Main(string[] args)
        {
            // The client code picks a concrete strategy and passes it to the
            // context. The client should be aware of the differences between
            // strategies in order to make the right choice.
            var context = new Context();

            Console.WriteLine("Client: Strategy is set to normal sorting.");
            context.SetStrategy(new StrategyA());
            context.DoSomeBusinessLogic();
            
            Console.WriteLine();
            
            Console.WriteLine("Client: Strategy is set to reverse sorting.");
            context.SetStrategy(new StrategyB());
            context.DoSomeBusinessLogic();
        }
    }
}
