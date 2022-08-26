using System;
using System.Collections.Generic;

namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ICustomer customer = new CustomerAdapter();
            IEnumerable<CustomerDTO> data = customer.GetCustomers();
            Console.WriteLine(data);
        }
    }
}