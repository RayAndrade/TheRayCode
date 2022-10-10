using System;

namespace Factory
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            
            ConsoleKey key;
            
            BaseCustomerFactory c = null;
            key = Console.ReadKey(true).Key;
            while (key != ConsoleKey.Escape)
            {
                if (key == ConsoleKey.NumPad1)
                {
                    c = new GoldCustomerFactory();
                }
                else if (key == ConsoleKey.NumPad2)
                {
                    c = new SilverCustomerFactory();
                }

                if (c != null) c.GetCustomer();
                key = Console.ReadKey(true).Key;
            }
            
            
        }
    }
}