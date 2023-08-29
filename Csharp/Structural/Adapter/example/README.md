
**Customer.cs**

```
namespace Adapter
{
    public class Customer
    {
        public int Id { get; set; }
        public string Name { get; set; }
        public string Address { get; set; }
        public string Contact { get; set; }
    }
}
```

**ICustomer.cs**

```
using System.Collections.Generic;

namespace Adapter
{
    public interface ICustomer
    {
        IEnumerable<CustomerDTO> GetCustomers();
    }
} 
```

**CustomerDTO.cs**

```
namespace Adapter
{
    public class CustomerDTO
    {
        public int CustomerId { get; set; }
        public string FullName { get; set; }
        public string AddressDetails { get; set; }
        public string Mobile { get; set; } 
        
    }
}
```

**CustomerManager.cs**

```
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
```

**CustomerAdapter**

```
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;

namespace Adapter
{
    public class CustomerAdapter:CustomerManager, ICustomer
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
```

**Program.cs**

```
using System;
using System.Collections.Generic;
using Newtonsoft.Json;

namespace Adapter
{
    internal class Program
    {
        public static void Main(string[] args)
        {
            ICustomer customer = new CustomerAdapter();
            IEnumerable<CustomerDTO> data = customer.GetCustomers();
            Console.WriteLine(JsonConvert.SerializeObject(data));
        }
    }
}
```
























