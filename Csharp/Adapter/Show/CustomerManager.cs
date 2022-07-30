using System.Collections.Generic;
using Newtonsoft.Json;

namespace Adapter
{
    public class CustomerManager
    {
        private List<Customer> cutomerList = new List<Customer>();
        public CustomerManager()
        {
            cutomerList.Add(new Customer
            {
                Id = 1,
                Name = "Cecil",
                Address = "USA",
                Contact = "(818)457-MATH"
            });

        }
        public string GetData()
        {
            return JsonConvert.SerializeObject(cutomerList);
        }
    }
}