[back](./page04.md)

The abstract class called Creator :
```csharp
public abstract class Creator
{ 
}
```




We do the same with a class we call **CreatorY**.


```csharp
class CreatorY : Creator
{
    public override Product FactoryMethod()
    {
        return new ProductB();
    }
}

```



[page 6](./page06.md)


