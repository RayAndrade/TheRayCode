# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C# Factory Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
|  Factory | [**C++**](../../../CPP/Creational/Factory/README.md) | [**C#**](../../../Csharp/Creational/Factory/README.md) | [Java](../../../Java/Creational/Factory/README.md) | [PHP](../../../PHP/Creational/Factory/README.md) |

[Show](./script/page01.md)

The **Factory design** pattern is a creational pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created. In other words, it defines a way to create objects without specifying their exact class.


For this example, let's create a toy factory that produces different types of toys, such as dolls, cars, and trains. We will use C# to implement this example.

First, let's create an interface for the toys that the factory will produce. We will call this interface **IToy**.

```
public interface IToy
{
    void Play();
}
```

Now let's create a Toy. Our first toy will be a **Doll**.

```
using System;

public class Doll : IToy
{
    public void Play()
    {
        Console.WriteLine("Playing with a doll...");
    }
}
```
Next we create the **Car** class

```
using System;

public class Car: IToy
{
    public void Play()
    {
        Console.WriteLine("Playing with a car....");
    }
}
```

Please note that both **Doll** and **Car** are extened with the **IToy** *interface*. This makes both **Doll** and **Car** of the *same type*. We will add another class of the same type to our collection. We add the **Train**

So we add a **Train** to our collection

```
using System;

public class Train: IToy
{
    public void Play()
    {
        Console.WriteLine("Playing with a train....");
    }
}
```
 Now let's creat a toy *factory* we call **SantasBag** this class will be responsible for creating the toy objects based on a given string input. It provides a simple *interface* for creating toys without knowing the exact type of toy that is being created.

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

Now to demonstrate our work in in the **Main** method.

```
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
```

WHen we copile our work and run it we get

```
Playing with a doll...
Playing with a car....
Playing with a train....
```


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

