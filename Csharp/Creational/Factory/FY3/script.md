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
