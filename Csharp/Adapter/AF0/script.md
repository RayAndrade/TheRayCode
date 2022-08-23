We start with the project setup.
Inside ot **Progtam.cs** in the **Main** we add:
```csharp
 Console.WriteLine("The Ray Code is AWESOME!!!");
```

If you cursor over the *red* **Console** as the warning lightbulb rightclick and choose *import missing reference*.

```charp
using System;
```
should appear at the top.

We create a **Customer** class. it will have the following code

```charp
 public int Id { get; set; }
 public string Name { get; set; }
 public string Address { get; set; }
 public string Contact { get; set; }
```


Now we create an interface for

Next we add the *interface* **ICustomer**.

```charp
namespace Adapter
{
    public interface ICustomer
    {
        IEnumerable<CustomerDTO> GetCustomers();
    }
}
```




If you cursor over the *red* **IEnumerable** as the warning lightbulb rightclick and choose *import missing reference*.
```charp
using System.Collections.Generic;
```
should appear at the top.
That is required for the **IEnumerable** object.

now I create a **CustomerManager**
```csharp
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
```
A Customor *DTO* is required. we create a class **CusomerDTO** with the following getters and setters.

```charp
 public int CustomerId { get; set; }
 public string FullName { get; set; }
 public string AddressDetails { get; set; }
 public string Mobile { get; set; }
```


When you add the missing *usings* you get:

```csharp
using System.Collections.Generic;
using Newtonsoft.Json;
```

Let create a  **CustomerAdapter** which will we extended with the interface **ICustomer**

```charp
 public class CustomerAdapter: ICustomer
 {
        private CustomerManager manager = new CustomerManager();
    public IEnumerable<CustomerDTO> GetCustomers()
    {
      //var data = base.GetData();
      var data = manager.GetData();
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
```
Our last place to go is **Program.cs**


we add to the **Main**

```csharp
 ICustomer customer = new CustomerAdapter();
 IEnumerable<CustomerDTO> data = customer.GetCustomers();
 Console.WriteLine(data);
```

When we compile and run we get:
```run
```







