using System;

namespace Show
{
    internal class Program
    {
        public static void ClientCode(Creator creator)
        {
            Console.WriteLine("Program: I'm not aware of the creator's class," +
                              "but it still works.\n" + creator.SomeOperation());
        }
        
        public static void Main(string[] args)
        {
            Console.WriteLine("App: Launched with the CreatorX.");
            ClientCode(new CreatorX());
            
            Console.WriteLine("");

            Console.WriteLine("App: Launched with the CreatorY.");
            ClientCode(new CreatorY());
            
            Console.WriteLine("The Ray Code is AWESOME!!!");
        }
    }
}