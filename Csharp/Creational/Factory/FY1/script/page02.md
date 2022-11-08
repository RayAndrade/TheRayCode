[back](./page01.md)

The Factory Method defines a method, which should be used for creating objects instead of using the **new** construction.
This will be the artical that I will post along with the scripts folder ..

The Creator class declares the factory method that is supposed to return an object of a Product class. 
The Creator's subclasses usually provide the implementation of this method.

The Creator class declares the factory method that is supposed to return an object of a Product class. 
The Creator's subclasses usually provide the implementation of this method.


We start by creating an *abstract* called **Creator** :




```csharp
abstract class Creator
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

The Product interface declares the operations that all concrete products must implement.

```csharp

public interface Product
{
    string Operation();
}
```

Concrete Products provide various implementations of the Product interface.

```csharp

class ProductA : Product
{
    public string Operation()
    {
        return "{Result of ProductA}";
    }
}

```

We create **ProductB** and also etend it with **Product**.
```csharp

class ProductB : Product
{
    public string Operation()
    {
        return "{Result of ProductB}";
    }
}

```

Now let's create a **Program** class for our demonstrateion.  

```csharp
class Program
{
    public void Main()
    { }
}
```
The client code works with an instance of a concrete creator, albeit through its base interface. 
As long as the client keeps working with the creator via the base interface, you can pass it any creator's subclass.

```csharp

public void ClientCode(Creator creator)
{
     Console.WriteLine("Program: I'm not aware of the creator's class," +
         "but it still works.\n" + creator.SomeOperation());
}
```
So we add the following to the **Main** method:

```csharp

Console.WriteLine("App: Launched with the CreatorX.");
ClientCode(new CreatorX());
            
Console.WriteLine("");

Console.WriteLine("App: Launched with the CreatorY.");
ClientCode(new CreatorY());

```
When we run we get:

```run
App: Launched with the CreatorX.
Client: I'm not aware of the creator's class,but it still works.
Creator: This creator's code has just worked with {From of ProductA}

App: Launched with the CreatorY.
Client: I'm not aware of the creator's class,but it still works.
Creator: This creator's code has just worked with {From of ProductB}

```





