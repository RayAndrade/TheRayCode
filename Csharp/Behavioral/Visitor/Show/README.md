[top](../README.md)

Here's a demonstration of the visitor pattern using a Monster theme. 
Each class will have its own .cs file.

**IMonster.cs**

This file defines the interface for the 'Element' in the Visitor pattern. 
Any monster class that wants to use the visitor pattern must implement this interface.

```
public interface IMonster
{
    void Accept(IMonsterVisitor visitor);
}
```

**Zombie.cs**

This file defines a specific type of 'Element' that implements IMonster. 
**Zombie** is a specific type of **Monster**.

```
public class Zombie : IMonster
{
    public void Accept(IMonsterVisitor visitor)
    {
        visitor.Visit(this);
    }
}
```

**Vampire.cs**

This file defines another specific type of 'Element' that implements IMonster. Vampire is another specific type of Monster.

```
public class Vampire : IMonster
{
    public void Accept(IMonsterVisitor visitor)
    {
        visitor.Visit(this);
    }
}
```

**IMonsterVisitor.cs**

This file defines the interface for the 'Visitor' in the Visitor pattern. 
Any class that wants to visit the Monsters must implement this interface.

```
public interface IMonsterVisitor
{
    void Visit(Zombie zombie);
    void Visit(Vampire vampire);
}
```

**MonsterVisitor.cs**

This file implements the IMonsterVisitor interface. This class defines what happens when the visitor visits each type of monster.

```
public class MonsterVisitor : IMonsterVisitor
{
    public void Visit(Zombie zombie)
    {
        Console.WriteLine("Visiting a Zombie!");
    }

    public void Visit(Vampire vampire)
    {
        Console.WriteLine("Visiting a Vampire!");
    }
}
```


**Program.cs**
This file is the entry point of our application. 
It creates instances of the Zombie and Vampire monsters and the MonsterVisitor, and then it instructs the monsters to accept the visitor.

```
public static void Main(string[] args)
{
    IMonster zombie = new Zombie();
    IMonster vampire = new Vampire();
    IMonsterVisitor visitor = new MonsterVisitor();

    zombie.Accept(visitor);
    vampire.Accept(visitor);
}
```

when you compile and run you get
```
Visiting a Zombie!
Visiting a Vampire!
```

The Visitor pattern is useful when you have a set of disparate types (like Zombie and Vampire here) that you want to perform operations on without adding those operations to the classes themselves. This allows you to add new operations easily without modifying the Zombie and Vampire classes, thus adhering to the open-closed principle.

It is particularly useful when these operations are complex and unrelated to the core responsibilities of the classes themselves, or when they need to work with data that shouldn't be exposed by the classes. The Monster theme gives you a simple, fun way to explore this useful pattern.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/AndradeRay/)


