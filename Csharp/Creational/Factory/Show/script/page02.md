
[back](./page1.md)

We will use this interface to make all of our customer types of the same type.

We start by creating our *Gold* customer

The **GoldCustomer** looks like:

```charp
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


Build:


Extend it with **ICustomer** and auto generate methods

public class GoldCustomer : ICustomer
{ }

auto generate missing classes

add:

Console.WriteLine("Gold Customer - Points Added");

Console.WriteLine("Gold Customer - Discount Added");

Console.WriteLine("Operation specific to Gold Customer"); 

[to slide 3](./page3.md)
