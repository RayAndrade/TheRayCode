[up](../README.md)

The Flyweight design pattern is a structural pattern used to reduce the memory footprint of a program by sharing objects, especially when a large number of objects with similar states are involved. It's particularly useful in scenarios where the instantiation of objects is costly in terms of system resources.

Here's how you can implement the Flyweight pattern in C#:

### 1. Flyweight Interface

**File:** `IFlyweight.cs`
```csharp
public interface IFlyweight
{
    void Operation(string extrinsicState);
}
```
- **Purpose:** Defines the interface through which flyweights can receive and act on extrinsic state.

### 2. Concrete Flyweight

**File:** `ConcreteFlyweight.cs`
```csharp
public class ConcreteFlyweight : IFlyweight
{
    private string intrinsicState;

    public ConcreteFlyweight(string intrinsicState)
    {
        this.intrinsicState = intrinsicState;
    }

    public void Operation(string extrinsicState)
    {
        Console.WriteLine($"Intrinsic State = {intrinsicState}, Extrinsic State = {extrinsicState}");
    }
}
```
- **Purpose:** Implements the Flyweight interface and stores intrinsic state. The intrinsic state is shared across multiple contexts and is independent of the flyweight's context.

### 3. Flyweight Factory

**File:** `FlyweightFactory.cs`
```csharp
public class FlyweightFactory
{
    private Dictionary<string, IFlyweight> flyweights = new Dictionary<string, IFlyweight>();

    public IFlyweight GetFlyweight(string key)
    {
        if (!flyweights.ContainsKey(key))
        {
            flyweights[key] = new ConcreteFlyweight(key);
        }
        return flyweights[key];
    }
}
```
- **Purpose:** Creates and manages flyweight objects and ensures that flyweights are shared properly. When a client requests a flyweight, the factory either returns an existing instance or creates a new one if it doesn't exist.

### 4. Program File (Demonstration)

**File:** `Program.cs`
```csharp
class Program
{
    static void Main(string[] args)
    {
        var factory = new FlyweightFactory();

        var flyweightA = factory.GetFlyweight("StateA");
        var flyweightB = factory.GetFlyweight("StateB");
        var flyweightA1 = factory.GetFlyweight("StateA"); // Reuses existing flyweight

        flyweightA.Operation("ExternalState1");
        flyweightB.Operation("ExternalState2");
        flyweightA1.Operation("ExternalState3");
    }
}
```
- **Purpose:** Demonstrates the use of the Flyweight pattern.
- **Expected Output:** When you run this program, you should see the states being printed out. Notice how `flyweightA` and `flyweightA1` share the same intrinsic state, demonstrating the flyweight pattern.

### Order of Creation in Project:

1. Create the `IFlyweight` interface.
2. Implement the `ConcreteFlyweight` class.
3. Create the `FlyweightFactory` class.
4. Finally, use these in the `Program.cs` file for demonstration.

When you run the code you should get:
```
Intrinsic State = StateA, Extrinsic State = ExternalState1
Intrinsic State = StateB, Extrinsic State = ExternalState2
Intrinsic State = StateA, Extrinsic State = ExternalState3
```


When following this pattern, especially in the context of teaching, it's important to emphasize the distinction between intrinsic and extrinsic states. The intrinsic state is stored in the Flyweight object, and the extrinsic state is passed to the flyweight methods. This separation allows for the efficient sharing of Flyweight objects.
