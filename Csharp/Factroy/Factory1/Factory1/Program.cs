
//https://www.youtube.com/watch?v=4m7IuLM4wdw

namespace Factory1
{
    using System;
    public class Program
    {
        public static void Main(string[] args)
        {
            BaseCustomerFactory c = new GoldCustomerFactory();
            ICustomer objCust = c.GetCustomer();
            
            //Console.WriteLine("Hello World!");
        }
    }
}