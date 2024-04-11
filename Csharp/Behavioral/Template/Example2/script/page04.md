[home](./page01.md) | [back](./page03.md) | [next](./page03.md)

Let's start with the **AbstractClass.cs**

```
AbstractClass
```
**AbstractClass** defines the template method and declares abstract methods  that the concrete subclasses must implement.

change **public** to
```csharp
abstract
```

The template method defines the skeleton of the algorithm. 
It calls the abstract methods, which are implemented by subclasses
```csharp
public void TemplateMethod()
{
    Console.WriteLine("AbstractClass: TemplateMethod - Step 1");
    PrimitiveOperation1();
    Console.WriteLine("AbstractClass: TemplateMethod - Step 3");
    PrimitiveOperation2();
    Console.WriteLine("AbstractClass: TemplateMethod - Step 5");
}
```

Some Abstract methods **to be** implemented by concrete subclasses.

**PrimitiveOperation1** and **PrimitiveOperation2**
```csharp
protected abstract void PrimitiveOperation1();
protected abstract void PrimitiveOperation2();
```
[page 5](./page05.md)
