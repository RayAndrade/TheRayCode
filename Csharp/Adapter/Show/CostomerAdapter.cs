using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;

namespace Adapter
{
    public class CostomerAdapter:CustomerManager, ICustomer
    {
        public IEnumerable<CustomerDTO> GetCustomers()
        {
            var data = base.GetData();
            IEnumerable<Customer> customers = JsonConvert.DeserializeObject<IEnumerable<Customer>>(data);
            return customers.Select(x => new CustomerDTO
            {
                CustomerId = x.Id,
                FullName = x.Name,
                AddressDetails = x.Address,
                Mobile = x.Contact
            });
        }
    }
}