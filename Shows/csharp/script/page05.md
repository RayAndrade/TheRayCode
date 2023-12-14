[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Let's create a **class**
```
Client
```
with
1
```
public void Main()
{ }
```
and we add
1.a
```
Adaptee adaptee = new Adaptee();
ITarget target = new Adapter(adaptee);
```
**sub** we need
```
using System;
```
for the write to console method


1.b
```
Console.WriteLine("Adaptee interface is incompatible with the client.");
Console.WriteLine("But with adapter client can call it's method.");
```
1.c
```
Console.WriteLine(target.GetRequest());
```




[page 6](./page06.md)
