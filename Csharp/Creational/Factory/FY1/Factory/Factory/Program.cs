using System;

namespace Factory
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            BaseCustomerFactory c;
            ConsoleKey key;
            key = Console.ReadKey(true).Key;
            while (key != ConsoleKey.Escape)
            {
                key = Console.ReadKey(true).Key;
                if (key == ConsoleKey.NumPad1)
                {
                    c = new GoldCustomerFactory();
                    ICustomer objCust = c.GetCustomer();
                }
                else if (key == ConsoleKey.NumPad2)
                {
                    c = new SilverCustomerFactory();
                    ICustomer objCust = c.GetCustomer();
                }
                
            }
            
            
        }
    }
}