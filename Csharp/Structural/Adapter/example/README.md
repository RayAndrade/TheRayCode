
1. **Customer.cs**:
    * `Customer` class represents a simple customer entity.
    * Properties include:
        - `Id`: A unique identifier for a customer.
        - `Name`: The name of the customer.
        - `Address`: The address of the customer.
        - `Contact`: The contact details for the customer.

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

2. **ICustomer.cs**:
    * `ICustomer` is an interface that has a method called `GetCustomers()` which returns a list of `CustomerDTO` objects.

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

3. **CustomerDTO.cs**:
    * `CustomerDTO` (Data Transfer Object) class represents a simplified or transformed customer data.
    * Properties include:
        - `CustomerId`: Represents the unique identifier for a customer.
        - `FullName`: Represents the full name of the customer.
        - `AddressDetails`: Represents the address details of the customer.
        - `Mobile`: Represents the mobile or contact details of the customer.

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

4. **CustomerManager.cs**:
    * `CustomerManager` class manages a list of `Customer` objects. For the purpose of this example, it initializes with one customer.
    * `GetData()` method serializes the customer list into a JSON string.

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

<<<<<<< HEAD
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
=======
5. **CustomerAdapter**:
    * This is an implementation of the Adapter Pattern. 
    * `CustomerAdapter` inherits from `CustomerManager` and also implements `ICustomer` interface.
    * `GetCustomers()` method:
        - Fetches the serialized customer data using the base class' `GetData()` method.
        - Deserializes the data into a list of `Customer` objects.
        - Transforms this list into a list of `CustomerDTO` objects.

6. **Program.cs**:
    * This is the main program.
    * Creates an instance of `CustomerAdapter`.
    * Fetches a list of `CustomerDTO` objects using `GetCustomers()` method.
    * Serializes and prints the fetched data to the console.


>>>>>>> 81bfc7d2 (*)

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

Here's a summary of the overall flow:

1. `CustomerManager` has a method `GetData()` that provides a JSON representation of its customer list.
2. You want to fetch and work with a different version of this customer data, represented by `CustomerDTO`.
3. Instead of modifying the `CustomerManager` directly, you introduce an adapter (`CustomerAdapter`) which transforms the data from the format given by `CustomerManager` to the desired `CustomerDTO` format.
4. The `Program` class uses the `CustomerAdapter` to fetch and display the adapted data.

This is a classic application of the Adapter Design Pattern, where `CustomerAdapter` allows two incompatible interfaces (`CustomerManager` and `ICustomer`) to work together.























