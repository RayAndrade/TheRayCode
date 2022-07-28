```url
https://youtu.be/h400NTIOrf8
```

We start by creating a project space we call **Adapter**.
We will demonstrate the **Adapter** design pattern.

We start by defining our **Customer**. 
We have a class that is called **Customer**. It looks like this:
```csharp
public class Customer
{
    public int Id { get; set; }
    public string Name { get; set; }
    public string Address { get; set; }
    public string Contact { get; set; }
}
```
Note: Look for a way that will auto-generate the getters and setters.

We assume that a class called **CustomerManager** that has been provide by a customer to be adaped by the class we are now creating.

That class looks like:
```csharp
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

please note the record construction:
```charp
cutomerList.Add(new Customer
{
    Id = 1,
    Name = "Cecil",
    Address = "USA",
    Contact = "(818)457-MATH"
});
```

We put these value in a *private* list we call **cutomerList**
```csharp
private List<Customer> cutomerList = new List<Customer>();
```

To access the records we add a **GetData** method:
```csharp
public string GetData()
{
   return JsonConvert.SerializeObject(cutomerList);
}
```
This requires at the top:
```csharp
using Newtonsoft.Json;
```

Next we create a *class* we call the **CustomerDTO**.

```csharp
public class CustomerDTO
{
    public int CustomerId { get; set; }
    public string FullName { get; set; }
    public string AddressDetails { get; set; }
    public string Mobile { get; set; }
}
```

So now our goal is to map **CustomerManager** to the **CustomerDTO**. We do this by adding the class **CostomerAdapter**.

The **CostomerAdapter** will inherate the **CustomerManager**

The code looks like:
```csharp
public class CustomerAdapter:CustomerManager
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
```
We add an interface **ICustomer**
```csharp
public interface ICustomer
{
    IEnumerable<CustomerDTO> GetCustomers();
}
```
 and we add the **ICustomer** to the **CustomerAdapter** the result will be:
```csharp
public class CustomerAdapter : CustomerManager, ICustomer
```

To show how you might atapt an object replace:
```csharp
//public class CustomerAdapter:CustomerManager,ICustomer
public class CustomerAdapter: ICustomer
```
and 

```csharp
//var data = base.GetData();
var data = manager.GetData();
```










































