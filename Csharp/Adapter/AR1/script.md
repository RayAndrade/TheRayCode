We start with the basic The Ray Code message.
```csharp
Console.WriteLine("The Ray Code is AWESOME!!!");
```
because I use the **Console** method I need to include or add *using* or

```csharp
using System;
```

This is done by going to the red bulb and selecting imprort
```csarp
using System;
```
Let's take a look at our first object. We are given a **ThirdPartyAdapter** *class*. The code looks like:
```csharp
private List<string> listOfString;
public ThirdPartyAdapter()
{
   listOfString = new List<string>();
}

public List<string> GetThirdPartyItem()
{
    listOfString.Add("Laptop");
    listOfString.Add("Mouse");
    listOfString.Add("Desktop");
    listOfString.Add("keyboard");
    listOfString.Add("Pen Drive");
     return listOfString;
}
```

As a result we need add
```csharp
using System.Collections.Generic;
```

So we create an *interface* we call **IClientAdapter** which is an *Adapter*.

```csharp
 public interface IClientAdapter
 {
    List<string> GetClientAdapterItem();
 }
```
It requires the *List* item and hence we need to import **System.Collections.Generic**.
So we add
```csharp
using System.Collections.Generic;
```



Next. 
The **Client** *class* looks like:
```csharp
private IClientAdapter ilientAdapter;

public Client(IClientAdapter _ilientAdapter)
{
   this.ilientAdapter = _ilientAdapter;
}

public List<string> GetListOfClientItem()
{
    return this.ilientAdapter.GetClientAdapterItem();
}
```

Of course we have a **IClientAdapter** handle called *ilientAdapter*.
We also need to include 
```csharp
using System.Collections.Generic;
```

for our

```csharp
public List<string> GetListOfClientItem()
{
    return this.ilientAdapter.GetClientAdapterItem();
}
```

Now let us look at the **ClientAdapter** class..

```csharp
public class ClientAdapter:ThirdPartyAdapter, IClientAdapter
{
    public List<string> GetClientAdapterItem()
    {
        return GetThirdPartyItem();
    }
}
```


Now let's put this all in a demostration we one place in the **Program.cs** .

```csharp
IClientAdapter iClientAdapter = new ClientAdapter();
Client objClient = new Client(iClientAdapter);
List<string> listOfString = objClient.GetListOfClientItem();
foreach (var item in listOfString)
{
    Console.WriteLine(item);
}
Console.ReadKey();
```
 and when we run the project we get.
 
 
 ```run
 
Laptop
Mouse
Desktop
keyboard
Pen Drive

 ```

