[back](./page06.md)



We do the same with a class we call **CreatorX**.


```csharp
class CreatorX : Creator
{
    public override Product FactoryMethod()
    {
        return new ProductA();
    }
}

```

We do the same with a class we call **CreatorY**.


```csharp
class CreatorY : Creator
{
    public override Product FactoryMethod()
    {
        return new ProductA();
    }
}

```


[page 8](./page08.md)



