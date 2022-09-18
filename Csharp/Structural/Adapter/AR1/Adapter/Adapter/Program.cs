using System;
using System.Collections.Generic;
using System.Linq;

namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ICustomer customer = new CustomerAdapter();
            IEnumerable<CustomerDTO> data = customer.GetCustomers();
            Console.WriteLine(data.First().FullName);
        }
    }
}