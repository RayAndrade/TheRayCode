using System;

namespace Singleton
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Try to create two instances of the Singleton. They should point to the same reference
            Singleton s1 = Singleton.Instance;
            Singleton s2 = Singleton.Instance;

            if (s1 == s2)
            {
                Console.WriteLine("Both instances are the same.");
            }

            // Use the Singleton's method
            s1.LogMessage("Hello from the Singleton pattern!");

            Console.ReadLine();
        }
    }
}