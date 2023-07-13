# TheRayCode is AWESOME!!!

**Template**

**[C#](../README.md)** 

**[Creational Patterns](../Creational/README.md)** | **[Structural Patterns](../Structural/README.md)** | **[Behavioral Patterns](../README.md)**

**C# Behavioral Patterns**

* **[ChainOfResponsibility](../ChainOfResponsibility/README.md)**
* **[Iterator](../Iterator/README.md)**
* **[Mediator](../Mediator/README.md)**
* **[Memento](../Memento/README.md)**
* **[Observer](../Observer/README.md)**
* **[State](../State/README.md)**
* **[Strategy](../Strategy/README.md)**
* **[Template](./README.md)**
* **[Visitor](../Visitor/README.md)**

[Example 1](./T1/README.md)

[Example](./Show/README.md)

**C# Template Design Pattern**

Here's an example of the Template pattern using a **Pet Animal** theme. 
Each class will have its own .cs file.

**AbstractPet.cs**

The **AbstractPet** is an abstract class that defines a method, **DailyRoutine()**, which represents the template for an algorithm. 
The steps of this algorithm are represented by the abstract methods **WakeUp()**, **Eat()**, **Play()**, and **Sleep()**.
```
public abstract class AbstractPet
{
    // Template Method
    public void DailyRoutine()
    {
        WakeUp();
        Eat();
        Play();
        Sleep();
    }

    public abstract void WakeUp();
    public abstract void Eat();
    public abstract void Play();
    public abstract void Sleep();
}
```
**Dog.cs**

The Dog class is a concrete class that provides the implementation of the algorithm steps.

```
public class Dog : AbstractPet
{
    public override void WakeUp()
    {
        Console.WriteLine("Dog wakes up and wags its tail.");
    }

    public override void Eat()
    {
        Console.WriteLine("Dog eats its food happily.");
    }

    public override void Play()
    {
        Console.WriteLine("Dog fetches the ball.");
    }

    public override void Sleep()
    {
        Console.WriteLine("Dog sleeps in its comfy bed.");
    }
}
```

**Cat.cs**

The Cat class is another concrete class that provides a different implementation of the algorithm steps.

```
public class Cat : AbstractPet
{
    public override void WakeUp()
    {
        Console.WriteLine("Cat wakes up and stretches.");
    }

    public override void Eat()
    {
        Console.WriteLine("Cat eats its food with pleasure.");
    }

    public override void Play()
    {
        Console.WriteLine("Cat chases a laser pointer.");
    }

    public override void Sleep()
    {
        Console.WriteLine("Cat curls up on the sofa and sleeps.");
    }
}

```

The Program file is the entry point of our application. It creates instances of Dog and Cat and invokes their DailyRoutine(), demonstrating the Template pattern.

```
public class Program
{
    public static void Main(string[] args)
    {
        AbstractPet dog = new Dog();
        dog.DailyRoutine();

        AbstractPet cat = new Cat();
        cat.DailyRoutine();
    }
}
```

When we compile and run we get

```
Dog wakes up and wags its tail.
Dog eats its food happily.
Dog fetches the ball.
Dog sleeps in its comfy bed.
Cat wakes up and stretches.
Cat eats its food with pleasure.
Cat chases a laser pointer.
Cat curls up on the sofa and sleeps.
```

The Template pattern is useful when you have a set of operations (like daily routines of pets) that follows the same broad structure (wake up, eat, play, sleep), but the specific details of the steps vary between implementations (Dog and Cat do things differently). 
By encapsulating these steps in a single workflow, the Template pattern offers a way to reuse code, facilitate code understanding, and enforce control over the algorithm. 
It's particularly useful when you want subclasses to override certain steps of an algorithm without changing the algorithm's structure.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/AndradeRay/)
