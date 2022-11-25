[back](./page05.md)

```csharp

abstract class Creator
{

}
```

Note that the Creator may also provide some default implementation of the factory method.

```csharp
public abstract IProduct FactoryMethod();

```

Also note that, despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by the factory method. 
Subclasses can indirectly change that business logic by overriding the factory method and returning a different type of product from it.


Call the factory method to create a Product object and use the product.
```csharp
public string SomeOperation()
{
    var product = FactoryMethod();
    var result = "Creator: The same creator's code has just worked with " + product.Operation();
    return result;
}
```

[page 7](./page07.md)
