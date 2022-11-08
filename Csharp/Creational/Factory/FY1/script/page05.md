[back](./page04.md)


Let's create a class called **CreatorX**
Note that the signature of the method still uses the abstract product type, even though the concrete product is actually returned from the method. 
This way the Creator can stay independent of concrete product.

We will extend this class with the **Creator** *abstract class*:

```csharp
class CreatorX : Creator
    public override Product FactoryMethod()
    {
        return new ProductA();
    }
}
```


[page 6](./page06.md)


