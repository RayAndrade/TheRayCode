using System;
using System.Collections.Generic;

namespace ChainOfResponsibility
{
   class Program
    {
        static void Main(string[] args)
        {
            // The other part of the client code constructs the actual chain.
            var monkey = new MonkeyHandler();
            var mouse = new MouseHandler();
            var bear = new BearHandler();

            monkey.SetNext(mouse).SetNext(bear);

            // The client should be able to send a request to any handler, not
            // just the first one in the chain.
            Console.WriteLine("Chain: Monkey > Mouse > Bear\n");
            Client.ClientCode(monkey);
            Console.WriteLine();

            Console.WriteLine("Subchain: Mouse > Bear\n");
            Client.ClientCode(mouse);
        }
    }
}
