using System;

namespace TheRayCode.Factory.DesignPatterns
{
    class Client
    {
        public void Main()
        {
            Console.WriteLine("App: Launched with the CreatorX.");
            ClientCode(new CreatorX());
            
            Console.WriteLine("");

            Console.WriteLine("App: Launched with the CreatorY.");
            ClientCode(new CreatorY());
        }
        public void ClientCode(Creator creator)
        {
            // ...
            Console.WriteLine("Client: I'm not aware of the creator's class," +
                              "but it still works.\n" + creator.SomeOperation());
            // ...
        }
    }
}