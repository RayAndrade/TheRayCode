[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Create class **ConcreteClassA.cs**
```
ConcreteClassA
```
and make it abstract
```
: AbstractClass
```
add required methods

For **RequiredOperations1**
```
Console.WriteLine("ConcreteClassA: Implemented RequiredOperations1");
```
for **RequiredOperation2**
```
Console.WriteLine("ConcreteClassA: Implemented RequiredOperation2");
```

we need to include 
```
using System;
```
and our hook
```
protected override void Hook1()
{
    Console.WriteLine("ConcreteClassA: Overridden Hook1");
}
```



[page 5](./page05.md)
