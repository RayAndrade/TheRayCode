[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Public class **Client.cs**

```
public void Main()
{
    Adaptee adaptee = new Adaptee();
    ITarget target = new Adapter(adaptee);

    Console.WriteLine("Adaptee interface is incompatible with the client.");
    Console.WriteLine("But with adapter client can call it's method.");

    Console.WriteLine(target.GetRequest());
}
```

Explanation: Client is a class that depends on the ITarget interface. It's unaware of Adaptee and Adapter.

[page 6](./page06.md)
