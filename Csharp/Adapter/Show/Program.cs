using System;
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json.Linq;

// https://www.youtube.com/watch?v=h400NTIOrf8
// At 15:00 
namespace Adapter
{
    class Program
    {
        static void Main(string[] args)
        {
            ICustomer customer = new CustomerAdapter();
            IEnumerable<CustomerDTO> data = customer.GetCustomers();
            Console.WriteLine(Json(contactcollection));
            
        }
    }
}