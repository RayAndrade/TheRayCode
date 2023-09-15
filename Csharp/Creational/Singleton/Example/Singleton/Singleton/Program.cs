using System;

namespace Singleton
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Trying to get instances of Singleton class
            Singleton singleton1 = Singleton.Instance;
            Singleton singleton2 = Singleton.Instance;

            singleton1.LogMessage("Hello from the first instance!");

            // Verifying that both instances are indeed the same
            if (ReferenceEquals(singleton1, singleton2))
            {
                Console.WriteLine("Both instances are the same!");
            }
            else
            {
                Console.WriteLine("Different instances exist!");
            }
        }
    }
}