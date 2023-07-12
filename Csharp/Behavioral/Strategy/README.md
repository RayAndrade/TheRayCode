# TheRayCode is AWESOME!!!

**Statergy**

**[C#](../README.md)** 

**[Creational Patterns](../Creational/README.md)** * **[Structural Patterns](../Structural/README.md)** * **[Behavioral Patterns](../README.md)**

**C# Behavioral Patterns**

* **[ChainOfResponsibility](../ChainOfResponsibility/README.md)**
* **[Iterator](../Iterator/README.md)**
* **[Mediator](../Mediator/README.md)**
* **[Memento](../Memento/README.md)**
* **[Observer](../Observer/README.md)**
* **[State](../State/README.md)**
* **[Strategy](./README.md)**
* **[Template](../Template/README.md)**
* **[Visitor](../Visitor/README.md)**

**C# Statergy Design Pattern**[touch me](./Show/README.md)

[Example 1](./SY1/README.md)

I need an example of the Strategy design pattern in c#. Place each class in its own .cs page. Place the demo in the main method file named Program. Describe the utility of each file. Describe when you would use the Template design pattern in. Use a zoo animal theme.

I can provide an example of the Strategy design pattern in C#. The Strategy pattern defines a family of algorithms, encapsulates each one, and makes them interchangeable. 
Strategy lets the algorithm vary independently from the clients that use it.

Let's use a zoo animal theme and let's assume that animals in a zoo have different ways of communicating (some roar, some squeak etc.), and this can change at runtime.

**ICommunicationStrategy.cs**

This file defines an interface for all strategies. Any class that wants to be a strategy must implement this interface.
```
public interface ICommunicationStrategy
{
    void Communicate();
}
```
**RoarStrategy.cs**

This file implements a specific strategy. The RoarStrategy is used when an animal communicates by roaring.

```
public class RoarStrategy : ICommunicationStrategy
{
    public void Communicate()
    {
        Console.WriteLine("Roar!");
    }
}
```
**SqueakStrategy.cs**

This file implements another specific strategy. The SqueakStrategy is used when an animal communicates by squeaking.

```
public class SqueakStrategy : ICommunicationStrategy
{
    public void Communicate()
    {
        Console.WriteLine("Squeak!");
    }
}
```

**Animal.cs**

This file defines the Animal class which uses strategies to communicate. It can change its communication strategy at runtime using the SetStrategy method.

```
public class Animal
{
    private ICommunicationStrategy _strategy;

    public Animal(ICommunicationStrategy strategy)
    {
        _strategy = strategy;
    }

    public void SetStrategy(ICommunicationStrategy strategy)
    {
        _strategy = strategy;
    }

    public void Communicate()
    {
        _strategy.Communicate();
    }
}
```

**Program.cs**

This is the entry point for the application. It creates instances of Animal with different strategies and calls the Communicate method on them. It also demonstrates how an Animal can change its communication strategy at runtime.

```
public class Program
{
    public static void Main(string[] args)
    {
        Animal lion = new Animal(new RoarStrategy());
        lion.Communicate();  // Output: Roar!

        Animal mouse = new Animal(new SqueakStrategy());
        mouse.Communicate();  // Output: Squeak!

        // Lion is feeling playful today and decides to squeak instead of roar
        lion.SetStrategy(new SqueakStrategy());
        lion.Communicate();  // Output: Squeak!
    }
}
```

When we compile and run we get

```
Roar!
Squeak!
Squeak!
```
The Strategy pattern is useful when there are several algorithms that can be used interchangeably. The pattern lets you swap the algorithm used at runtime. It's also useful when an algorithm uses data that the client shouldn't know about. The algorithm can be encapsulated in its own class that provides the strategy.

In this example, the strategy pattern lets the Animal class switch between different communication methods at runtime. This is much more flexible than implementing all possible communication methods in the Animal class.

[RayAndrade.COM](https://www.RayAndrade.com)

[TheRayCode.ORG](https://www.TheRayCode.org)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

































