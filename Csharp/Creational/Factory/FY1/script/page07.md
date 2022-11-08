[back](./page06.md)

The *abstract class* called **Creator** :

```csharp
public abstract class Creator
{ 
}

```


Note that the Creator may also provide some default implementation of the factory method.

```csharp
public abstract Product FactoryMethod();
```

Also note that, despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by the factory method. 
Subclasses can indirectly change that business logic by overriding the factory method and returning a different type of product from it.

```csharp
public string SomeOperation()
{
    var product = FactoryMethod();
    var result = "Creator: The same creator's code has just worked with "
        + product.Operation();

    return result;
}
```

Call the factory method to create a Product object and use the product.
Concrete Creators override the factory method in order to change the resulting product's type.


[page 8](./page08.md)



