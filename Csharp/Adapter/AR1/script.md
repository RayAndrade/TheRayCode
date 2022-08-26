We start out with the basic hello world program.
```csharp
Console.WriteLine("The Ray Code is AWESOME!!!");
```

we start out with the **Customer** object
```csharp
 public int Id { get; set; }
 public string Name { get; set; }
 public string Address { get; set; }
 public string Contact { get; set; }
```

The **CustomerDTO** is
```csharp
 public int CustomerId { get; set; }
 public string FullName { get; set; }
 public string AddressDetails { get; set; }
 public string Mobile { get; set; }
```

Install **Newtonsoft.Json;**.
So in the end we have 
```csharp
 using System.Collections.Generic;
 using Newtonsoft.Json;
```
the top.

We create a **ICustomer** interface.
```csharp
 IEnumerable<CustomerDTO> GetCustomers();
```

We need to import the **System.Collections.Generic** for the **IEnumerable** object.
```csharp
 using System.Collections.Generic;
```
So let's create an Adapter we will call it **CustomerAdapter**.

we want to extned is with
```csharp
 : CustomerManager,ICustomer
```
include missing reference. That should yeild
```csharp
public class CustomerAdapter:CustomerManager,ICustomer
 {
     public IEnumerable<CustomerDTO> GetCustomers()
     {
         throw new System.NotImplementedException();
     }
 }
```
repace the throw statment with,
 
 
Now let' put this all together in the **Program.cs**,



Compile yeilds nothing..


