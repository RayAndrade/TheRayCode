using System;

namespace Singleton
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            // Try to create two instances of the OnlyOne. They should point to the same reference
            OnlyOne o1 = OnlyOne.Instance;
            OnlyOne o2 = OnlyOne.Instance;

            if (o1 == o2)
            {
                Console.WriteLine("Both instances are the same.");
            }

            // Use the OnlyOne's method
            o1.LogMessage("Hello from the Singleton pattern!");

            Console.ReadLine();
        }
    }
}