[up](../README.md)

Let's adapt the Strategy design pattern example to a more creative context: a jailbreak story. In this scenario, we'll have different strategies for breaking out of jail.

### Project Structure
1. **IJailbreakStrategy.cs**: Defines the jailbreak strategy interface.
2. **TunnelStrategy.cs**: Implements a tunneling strategy for jailbreak.
3. **BribeGuardStrategy.cs**: Implements a strategy involving bribing a guard.
4. **JailbreakContext.cs**: Maintains a reference to a jailbreak strategy.
5. **Program.cs**: Entry point for demonstrating the strategy pattern in action.

### 1. IJailbreakStrategy.cs
```csharp
public interface IJailbreakStrategy
{
    string Execute();
}
```
*Explanation*: This interface declares the `Execute` method, which will be implemented by different jailbreak strategies.

### 2. TunnelStrategy.cs
```csharp
public class TunnelStrategy : IJailbreakStrategy
{
    public string Execute()
    {
        return "Digging a tunnel under the fence...";
    }
}
```
*Explanation*: Implements the jailbreak strategy interface, simulating a tunneling method for escape.

### 3. BribeGuardStrategy.cs
```csharp
public class BribeGuardStrategy : IJailbreakStrategy
{
    public string Execute()
    {
        return "Bribing the guard to open the gate...";
    }
}
```
*Explanation*: Another implementation of the jailbreak strategy, simulating a scenario where a guard is bribed to facilitate escape.

### 4. JailbreakContext.cs
```csharp
public class JailbreakContext
{
    private IJailbreakStrategy _strategy;

    public JailbreakContext(IJailbreakStrategy strategy)
    {
        this._strategy = strategy;
    }

    public void SetStrategy(IJailbreakStrategy strategy)
    {
        this._strategy = strategy;
    }

    public string ExecuteStrategy()
    {
        return _strategy.Execute();
    }
}
```
*Explanation*: This class maintains a reference to a jailbreak strategy object and can change the strategy at runtime. It has methods to set the strategy and execute it.

### 5. Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        var context = new JailbreakContext(new TunnelStrategy());
        Console.WriteLine(context.ExecuteStrategy());

        context.SetStrategy(new BribeGuardStrategy());
        Console.WriteLine(context.ExecuteStrategy());
    }
}
```
*Explanation*: Demonstrates the usage of the Strategy pattern with a jailbreak theme. It starts with the `TunnelStrategy` and then switches to the `BribeGuardStrategy`.

### Order of Creation
1. **IJailbreakStrategy.cs**
2. **TunnelStrategy.cs** and **BribeGuardStrategy.cs**
3. **JailbreakContext.cs**
4. **Program.cs**

### Expected Output in the Terminal
```
Digging a tunnel under the fence...
Bribing the guard to open the gate...
```

This example illustrates how the Strategy pattern can be applied in a more narrative context, making the concept more engaging and relatable for students. The strategies represent different methods for a jailbreak, showcasing the pattern's ability to switch between different algorithms at runtime.
