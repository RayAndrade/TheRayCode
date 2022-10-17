using System;

namespace Factory
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            
            ConsoleKey key;
            BaseCustomerFactory c = null;
            c = new GoldCustomerFactory();
            c = new SilverCustomerFactory();
            c.GetCustomer();
            


        }
    }
}