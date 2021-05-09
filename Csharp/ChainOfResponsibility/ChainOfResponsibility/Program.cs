using System;
using System.Collections.Generic;

namespace ChainOfResponsibility
{
   class Program
    {
        static void Main(string[] args)
        {
            // The other part of the client code constructs the actual chain.
            var mouse = new MouseHandler();
            var cat = new CatHandler();
            var dog = new DogHandler();

            mouse.SetNext(cat).SetNext(dog);

            // The client should be able to send a request to any handler, not
            // just the first one in the chain.
            Console.WriteLine("Chain: Dog > Cat > Mouse\n");
            Client.ClientCode(mouse);
            Console.WriteLine();

            Console.WriteLine("Subchain: Dog > Cat\n");
            Client.ClientCode(cat);
        }
    }
}
