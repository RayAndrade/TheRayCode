using System;
namespace Factory
{
    internal static class Program
    {
        public static void Main(string[] args)
        {
            BaseCustomerFactory c = null;
            while (true) 
            {
                int choice = 0 ;
                choice = Convert.ToInt32(Console.ReadLine());
                switch(choice) 
                {
                    case 1:
                        c = new GoldCustomerFactory();
                        c.GetCustomer();
                        break;
                    case 2:
                        c = new SilverCustomerFactory();
                        c.GetCustomer();
                        break;
                    case 0:
                        return;
                }
            }
        }
    }
}