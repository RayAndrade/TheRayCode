[up](../README.md)

Sure, let's modify the example to use sheep for counting. In this revised version, we'll create a simple language where expressions represent counting sheep. This will be a playful way to demonstrate the Interpreter design pattern in C#.

### 1. `IExpression.cs`
This is the interface for all expression nodes.

```csharp
public interface IExpression
{
    string Interpret();
}
```

### 2. `SheepExpression.cs`
Implements `IExpression` for a single sheep.

```csharp
public class SheepExpression : IExpression
{
    public string Interpret()
    {
        return "Sheep ";
    }
}
```

### 3. `CountSheepExpression.cs`
Implements `IExpression` for counting a number of sheep.

```csharp
public class CountSheepExpression : IExpression
{
    private int number;

    public CountSheepExpression(int number)
    {
        this.number = number;
    }

    public string Interpret()
    {
        var result = new StringBuilder();
        for (int i = 0; i < number; i++)
        {
            result.Append(new SheepExpression().Interpret());
        }
        return result.ToString();
    }
}
```

### 4. `Program.cs`
Demonstrates the usage of the Interpreter pattern.

```csharp
using System;

class Program
{
    static void Main(string[] args)
    {
        IExpression threeSheep = new CountSheepExpression(3);
        Console.WriteLine(threeSheep.Interpret());

        IExpression fiveSheep = new CountSheepExpression(5);
        Console.WriteLine(fiveSheep.Interpret());
    }
}
```

### Order of Class Creation:
1. `IExpression.cs`
2. `SheepExpression.cs`
3. `CountSheepExpression.cs`
4. `Program.cs`

### Expected Terminal Output:
```
Sheep Sheep Sheep 
Sheep Sheep Sheep Sheep Sheep 
```

In this playful example, the `CountSheepExpression` class takes a number and interprets it as a string of "Sheep" repeated that many times. This way, if you want to count three sheep, it will print "Sheep Sheep Sheep". This example demonstrates the basic concept of the Interpreter design pattern in a fun and relatable way.
