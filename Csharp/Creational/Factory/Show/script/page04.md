[back](./page03.md)


We do the same as we did to the BronzeCustomer .


```charp
public class BronzeCustomer : ICustomer
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


Build:


Extend it with **ICustomer** and auto generate methods

public class BronzeCustomer : ICustomer
{ }

auto generate missing classes

add:

Console.WriteLine("Bronze Customer - Points Added");

Console.WriteLine("Bronze Customer - Discount Added");

Console.WriteLine("Operation specific to Bronze Customer"); 



[to slide 5](./page05.md)
