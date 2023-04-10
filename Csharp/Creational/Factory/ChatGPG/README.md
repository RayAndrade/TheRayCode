The factory design pattern is a creational pattern that provides an interface for creating objects in a superclass, but allows subclasses to alter the type of objects that will be created. In other words, it defines a way to create objects without specifying their exact class.

For this example, let's create a toy factory that produces different types of toys, such as dolls, cars, and trains. We will use C# to implement this example.

First, let's create an interface for the toys that the factory will produce. We will call this interface "IToy".

```csharp

namespace TheRayCode.Factory
{
    public interface IToy
    {
        void Play();
    }
}

Next, let's create the classes for each type of toy that implements the IToy interface. We will create classes for dolls, cars, and trains.

```csharp

namespace TheRayCode.Factory
{
    public class Doll : IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a doll...");
        }
    }
}
```


```
namespace TheRayCode.Factory
{
    public class Car : IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a car...");
        }
    }
}
```


```csharp
namespace TheRayCode.Factory
{
    public class Train : IToy
    {
        public void Play()
        {
            Console.WriteLine("Playing with a train...");
        }
    }
}
```
Now, let's create the toy factory itself. We will call this class "ToyFactory".

```csharp

namespace TheRayCode.Factory
{
    public class ToyFactory
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
}
```

Finally, let's create a program that uses the toy factory to create and play with toys.

```csharp

namespace TheRayCode.Factory
{
    class Program
    {
        static void Main(string[] args)
        {
            IToy doll = ToyFactory.CreateToy("doll");
            IToy car = ToyFactory.CreateToy("car");
            IToy train = ToyFactory.CreateToy("train");

            doll.Play();
            car.Play();
            train.Play();

            Console.ReadKey();
        }
    }
}
```

In this example, we created an interface for the toys, implemented classes for each type of toy, created a factory class that creates the toys based on a string input, and finally created a program that uses the factory to create and play with toys.

Note that each class is in its own separate file and organized by namespace. The dependency is organized by making sure that each class has the proper namespace and is referenced properly in the other classes that use it.



