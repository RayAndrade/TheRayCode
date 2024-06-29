[home](./page01.md) | [back](./page12.md) | [next](./page14.md)

Now at the client **Program.cs**
we add some client code
```
static void ClientMethod(IAbstractFactory factory)
{
    var productA = factory.CreateProductA();
    var productB = factory.CreateProductB();

    Console.WriteLine(productA.FunctionA());
    Console.WriteLine(productB.FunctionB());
}
```
and then for main
```
IAbstractFactory factory1 = new ConcreteFactory1();
ClientMethod(factory1);
```
and
```
IAbstractFactory factory2 = new ConcreteFactory2();
ClientMethod(factory2);
```


[page 14](./page14.md)
