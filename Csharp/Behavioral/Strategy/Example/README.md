[up](../README.md)

This C# code is a clear implementation of the Strategy design pattern, a behavioral design pattern that enables selecting an algorithm's behavior at runtime. Let's break down each file and explain the role of each class and variable:

### IStrategy.cs

```csharp
public interface IStrategy
{
    string Execute();  
}
```

- **IStrategy**: This is an interface that defines a method `Execute()`. It's the primary component of the Strategy pattern. Any class that implements this interface will provide its own implementation of the `Execute()` method.

### ConcreteStrategyA.cs

```csharp
public class ConcreteStrategyA: IStrategy
{
    public string Execute()
    {
        return "Executing Strategy A";
    }
}
```

- **ConcreteStrategyA**: This class implements the `IStrategy` interface. Specifically, it provides the implementation for the `Execute()` method, returning a string `"Executing Strategy A"`. This class represents a specific algorithm or behavior.

### ConcreteStrategyB.cs

```csharp
public class ConcreteStrategyB: IStrategy
{
    public string Execute()
    {
        return "Executing Strategy B";
    }
}
```

- **ConcreteStrategyB**: Similar to `ConcreteStrategyA`, this class also implements the `IStrategy` interface and provides its own implementation of the `Execute()` method, returning `"Executing Strategy B"`. It represents an alternative algorithm or behavior to `ConcreteStrategyA`.

### Context.cs

```csharp
public class Context
{
    private IStrategy _strategy;

    public Context(IStrategy strategy)
    {
        _strategy = strategy;
    }

    public void SetStrategy(IStrategy strategy)
    {
        _strategy = strategy;
    }

    public string ExecuteStrategy()
    {
        return _strategy.Execute();
    }
}
```

- **Context**: This class is used to switch between different strategies dynamically. It has a private field `_strategy` of type `IStrategy`, which holds the current strategy.
  - **Constructor**: It accepts an `IStrategy` object and initializes the `_strategy` field with it.
  - **SetStrategy**: This method allows changing the strategy at runtime.
  - **ExecuteStrategy**: This method executes the `Execute()` method of the currently set strategy.

### Program.cs

```csharp
internal class Program
{
    public static void Main(string[] args)
    {
        var context = new Context(new ConcreteStrategyA());
        Console.WriteLine(context.ExecuteStrategy());

        context.SetStrategy(new ConcreteStrategyB());
        Console.WriteLine(context.ExecuteStrategy());
    }
}
```

- **Program**: This is the entry point of the application.
  - It creates an instance of `Context`, initially with `ConcreteStrategyA`.
  - It executes the strategy and prints the result (`Executing Strategy A`).
  - Then, it switches the strategy to `ConcreteStrategyB` using `SetStrategy`.
  - Finally, it executes the new strategy and prints the result (`Executing Strategy B`).

### Result

```
Executing Strategy A
Executing Strategy B
```

- This output demonstrates the Strategy pattern in action. The `Context` object first uses `ConcreteStrategyA` and then switches to `ConcreteStrategyB`, showing how strategies can be changed dynamically at runtime.
