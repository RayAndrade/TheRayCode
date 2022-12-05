https://youtu.be/4m7IuLM4wdw <br/>

Let’s take a close look at the Factory Method. When you want to define an interface for creating an object BUT, let subclasses decide which class is to instantiate to the subclass.

In today’s example I will use the story of creating a type of awards plan. We have 2 (you may add more) types of plans. A Gold plan and a Silver plan. Latter we may want to add a Bronze plan or a Diamond plan.

The code example will be using C sharp as a programming language.

we start by first creating the interface
```csharp
public interface ICustomer
{
    void AddPoints();
    void AddDiscount();
}
```

next we turn our attention to creating the classes

We start with the Silver Customer. We will all make this class use the interface that we have just created.
```csharp
using System;
public class SilverCustomer : ICustomer
{
    public void AddPoints()
    {
        Console.WriteLine("Silver Customer - Points Added");
    }

    public void AddDiscount()
    {
        Console.WriteLine("Silver Customer - Discount Added");
    }
    public void SilverOperation()
    {
        Console.WriteLine("Operation specific to Silver Customer");
    }
}
```

Now we need to create a BaseCustomerFactory to house the factories that will be creating our objects.
```csharp
public abstract class BaseCustomerFactory
{
    public ICustomer GetCustomer()
    {
        ICustomer myCust = this.CreateCustomer();
        myCust.AddPoints();
        myCust.AddDiscount();
        return myCust;
    }
    public abstract ICustomer CreateCustomer();
}
```
the BaseCustomerFactory class gets the which customer we desire, for example say the Silver Customer.

So if we go to to **main** we can run
```charp
public static void Main(string[] args)
{
    BaseCustomerFactory c = new SilverCustomerFactory();
    ICustomer objCust = c.GetCustomer();
}
```
we should get 
```run
Operation specific to Silver Customer
Silver Customer - Points Added
Silver Customer - Discount Added
```
as a result.

Now let’s add the Gold Customer. It also will use the interface ICustomer. This makes both the Silver and Gold customer of the same type.

```csharp
using System;
public class GoldCustomer : ICustomer
{
    public void AddPoints()
    {
        Console.WriteLine("Gold Customer - Points Added");
    }

    public void AddDiscount()
    {
        Console.WriteLine("Gold Customer - Discount Added");
    }

    public void GoldOperation()
    {
        Console.WriteLine("Operation specific to Gold Customer"); 
    } 
}
```
We also need to create a interface factory that it will also be extended by the base BaseCustomerFactory abstract class
```csharp
public class GoldCustomerFactory : BaseCustomerFactory
{
    public override ICustomer CreateCustomer()
    {
        GoldCustomer objCust = new GoldCustomer();
        objCust.GoldOperation();
        return objCust;
    }
}
```
Now if we just change the desired class to the GoldCustomer we should get desired result
```charp
public static void Main(string[] args)
{
    BaseCustomerFactory c = new GoldCustomer();
    ICustomer objCust = c.GetCustomer();
}
```
 
result:

```run
Operation specific to Gold Customer
Gold Customer - Points Added
Gold Customer - Discount Added
```

























