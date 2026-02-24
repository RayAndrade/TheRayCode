[up](../README.md)

Absolutely, let's adapt the example to a Monster Factory using the Factory design pattern. In this scenario, the factory will create different types of monsters.

### 1. `Monster.cs` - The Product Interface

This interface defines the contract for all types of monsters. Every monster should have a `Roar` method.

```csharp
public interface IMonster
{
    void Roar();
}
```

### 2. `Dragon.cs` - A Concrete Product

This class implements the `IMonster` interface. It represents a dragon in our monster factory.

```csharp
using System;

public class Dragon : IMonster
{
    public void Roar()
    {
        Console.WriteLine("The dragon roars with fiery breath!");
    }
}
```

### 3. `Goblin.cs` - Another Concrete Product

Another implementation of the `IMonster` interface, representing a goblin.

```csharp
using System;

public class Goblin : IMonster
{
    public void Roar()
    {
        Console.WriteLine("The goblin growls menacingly!");
    }
}
```

### 4. `MonsterFactory.cs` - The Factory

This class is the heart of the Factory pattern. It decides which class to instantiate based on the input.

```csharp
using System;

public static class MonsterFactory
{
    public static IMonster GetMonster(string monsterType)
    {
        switch (monsterType)
        {
            case "Dragon":
                return new Dragon();
            case "Goblin":
                return new Goblin();
            default:
                throw new ArgumentException("Invalid monster type");
        }
    }
}
```

### 5. `Program.cs` - The Client

The entry point of the application, where the factory is used to create monster objects.

```csharp
using System;

class Program
{
    static void Main(string[] args)
    {
        IMonster myDragon = MonsterFactory.GetMonster("Dragon");
        myDragon.Roar();

        IMonster myGoblin = MonsterFactory.GetMonster("Goblin");
        myGoblin.Roar();
    }
}
```

### Order of Creation

1. Start with the `IMonster` interface.
2. Create the concrete classes `Dragon` and `Goblin`.
3. Implement the `MonsterFactory`.
4. Use the factory in the `Program.cs`.

### Expected Output

When you run the program, you should see:

```
The dragon roars with fiery breath!
The goblin growls menacingly!
```

### How This Is An Example of the Factory Design Pattern

- **Abstraction in Creation**: The `Program.cs` (client) doesn't directly instantiate the `Dragon` or `Goblin` classes; it uses `MonsterFactory` for object creation.
- **Loose Coupling**: The client only interacts with the `IMonster` interface, not with the concrete classes directly.
- **Scalability**: New monster types can be added easily by extending the `MonsterFactory`.

This code illustrates the Factory design pattern by encapsulating the object creation logic in the `MonsterFactory` class, fostering loose coupling and easy extensibility.

