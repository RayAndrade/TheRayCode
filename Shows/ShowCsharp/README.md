# [TheRayCode](../../../README.md) is AWESOME!!!

**[C#](../README.md)** 

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C# Creational Patterns**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Builder| [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |

[script](./script/page01.md)



This code demonstrates an example of the Factory Design Pattern in C#. Here's a breakdown of the different parts:

**IToy interface:** It is an interface which declares a method `Play()`. The role of this interface is to define a contract for toy classes. Any class implementing this interface must provide an implementation for the `Play()` method.

```
public interface IToy
{
    void Play();
}
```

**Car, Doll, and Train classes:** These are three classes that implement the `IToy` interface. Each of these classes has its own implementation of the `Play()` method. 

```
public class Car: IToy
{
    public void Play()
    {
        Console.WriteLine("Playing with a car....");
    }
}
```

```
public class Doll : IToy
{
    public void Play()
    {
        Console.WriteLine("Playing with a doll...");
    }
}
```

```
public class Train: IToy
{
    public void Play()
    {
        Console.WriteLine("Playing with a train....");
    }
}
```

**SantasBag class:** This class acts as a simple factory for creating objects that implement the `IToy` interface. It has a static method `CreateToy(string type)` that takes a string as input and returns an instance of the corresponding class. If the input string is "doll", it creates and returns a new `Doll` object. If the string is "car", it creates and returns a new `Car` object. And if the string is "train", it creates and returns a new `Train` object. If the input string doesn't match any of these types, the method throws an `ArgumentException`.

```
public class SantasBag
{
    public static IToy CreateToy(string type)
    {
        switch (type)
        {
            case "doll":
                return new Doll();
            case "car":
                return new Car();
            case "train":
                return new Train();
            default:
                throw new ArgumentException("Invalid toy type");
        }
    }
}
```



**Program class:** This is the main program class. In its `Main` method, it uses the `SantasBag` factory to create a `Doll`, `Car`, and `Train` object. It then calls the `Play()` method on each of these objects. This demonstrates the Factory Pattern in action: the client code (in this case, the `Main` method) is able to work with the `IToy` interface and doesn't need to know the specific classes of the objects it's dealing with.

The Factory Design Pattern provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created. This pattern is commonly used when a class cannot anticipate the class of objects it needs to create, or when a class wants its subclasses to specify the objects it creates. In this code example, the `SantasBag` class does not know beforehand which type of `IToy` it needs to create; this decision is deferred to the runtime `CreateToy` method.


**Program** class: This is the main program class. In its Main method, it uses the SantasBag factory to create a Doll, Car, and Train object. It then calls the Play() method on each of these objects. This demonstrates the Factory Pattern in action: the client code (in this case, the Main method) is able to work with the IToy interface and doesn't need to know the specific classes of the objects it's dealing with.

```
internal class Program
{
        
    public static void Main(string[] args)
    {
        IToy doll = SantasBag.CreateToy("doll");
        IToy car = SantasBag.CreateToy("car");
        IToy train = SantasBag.CreateToy("train");

        doll.Play();
        car.Play();
        train.Play();
        Console.ReadKey();
    }
}
```

The Factory Design Pattern provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created. This pattern is commonly used when a class cannot anticipate the class of objects it needs to create, or when a class wants its subclasses to specify the objects it creates. In this code example, the SantasBag class does not know beforehand which type of IToy it needs to create; this decision is deferred to the runtime CreateToy method.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
