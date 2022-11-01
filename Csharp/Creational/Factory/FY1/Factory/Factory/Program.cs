using System;

namespace Factory
{
    internal class Program
    {
        // https://refactoring.guru/design-patterns/factory-method/csharp/example
        public static void Main(string[] args)
        {
            Console.WriteLine("App: Launched with the CreatorX.");
            ClientCode(new CreatorX());
            
            Console.WriteLine("");

            Console.WriteLine("App: Launched with the CreatorY.");
            ClientCode(new CreatorY());
        }
        public static void ClientCode(Creator creator)
        {
            // ...
            Console.WriteLine("Client: I'm not aware of the creator's class," +
                              "but it still works.\n" + creator.SomeOperation());
            // ...
        }
     }
}