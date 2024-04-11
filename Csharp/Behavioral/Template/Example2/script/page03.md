[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

We start with the **Abstract Class** **AbstractClass**

```csharp
AbstractClass
```
we make it **Abstract**

The template method defines the skeleton of an algorithm.
```csharp
public void TemplateMethod()
{
    PrimitiveOperation1();
    PrimitiveOperation2();
    Console.WriteLine("");
}
```
These operations have to be implemented in subclasses.

**PrimitiveOperation1** and **PrimitiveOperation2**

```csharp
protected abstract void PrimitiveOperation1();
protected abstract void PrimitiveOperation2();
```
next

[page 4](./page04.md)
