```url
https://youtu.be/h400NTIOrf8
```
Setup:

New Solution >>
Solution Name: Show
Project Name: Show

Solution Dirtetory

/home/ray/TheRayCode/TheRayCode/Csharp/Adapter/

SDK 3.1

Language C#

Docker Support Disables

[Create]

put solution in same directory

Refactor Show to Adapter

We start by creating a project space we call **Adapter**.
We will demonstrate the **Adapter** design pattern.

We start by defining our **Customer**. 
We have a class that is called **CustomerCustomer**. It looks like this:
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
        
    }
}
```

First we add a *privite* varable

```csharp
 private List<Customer> cutomerList = new List<Customer>();
```
Because we are using *List* we need to import *System.Collections.Generic*

```csharp
using System.Collections.Generic;
```
Our next bit of code is a record in Json format

```csharp
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
```
Now we want to convert this record into a Json element that we may use some UI. To do this we use a *JsonConverter*.
The name of the method is *GetData*:

```csharp
public string GetData()
{
   return JsonConvert.SerializeObject(cutomerList);
}
```
To use *JsonConvert* we need to import


```csharp
using Newtonsoft.Json;
```

I am using *Newtonsoft.Json* v.13.1.2

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

As a result we need to add the following imports.

```csharp
using System.Collections.Generic;
using System.Linq;
using Newtonsoft.Json;
```

Now we add an interface **ICustomer**
```csharp
public interface ICustomer
{
    IEnumerable<CustomerDTO> GetCustomers();
}
```

we import the missing reference

```charp
using System.Collections.Generic;
```

 and we add the **ICustomer** to the **CustomerAdapter** the result will be:
```csharp
public class CustomerAdapter : CustomerManager  , ICustomer
```

Now if we want to REPLACE the *base.GetData();* with 

```csharp
manager.GetData();
```




To show how you might adapt an object replace:
```csharp
//public class CustomerAdapter:CustomerManager,ICustomer
public class CustomerAdapter: ICustomer
```
and 

```csharp
//var data = base.GetData();
var data = manager.GetData();
```










































