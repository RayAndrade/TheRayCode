[back](./page02.md)

We do the same as we did to the Gold customer by extending this class with also the **ICustomer**  intetrface.

The mame of this customer will be **SilverCustomer**


```charp
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


Build:


Extend it with **ICustomer** and auto generate methods

public class GoldCustomer : ICustomer
{ }

auto generate missing classes

add:

Console.WriteLine("Silver Customer - Points Added");

Console.WriteLine("Silver Customer - Discount Added");

Console.WriteLine("Operation specific to Silver Customer"); 



[to slide 4](./page04.md)
