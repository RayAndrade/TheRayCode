[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Create **class**
```
Client
```
add code:
1.
```
public void Main()
{  }
```
2 inside this main function we add:
2.a
```
Adaptee adaptee = new Adaptee();
ITarget target = new Adapter(adaptee);
```

2.b
```
Console.WriteLine("Adaptee interface is incompatible with the client.");
Console.WriteLine("But with adapter client can call it's method.");
```

2.c
```
Console.WriteLine(target.GetRequest());
```
*Explanation*: `Client` is a class that depends on the `ITarget` interface. It's unaware of `Adaptee` and `Adapter`.

So we goto program

[page 5](./page05.md)
