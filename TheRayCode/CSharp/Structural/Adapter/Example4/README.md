[up](../README.md) | [script](script/page01.md)

Creating an example of the Adapter pattern in C# involves several components. The Adapter pattern is a structural design pattern that allows objects with incompatible interfaces to collaborate. It involves at least three roles: the `Client`, the `Target`, and the `Adapter`. Sometimes, there's also an `Adaptee` - the class that is being adapted to the `Target` interface.

### Structure:

1. **Target Interface**: This is the interface that the Client expects to work with.
2. **Adapter Class**: This adapts the interface of the Adaptee to the Target interface.
3. **Adaptee Class**: This is the class that needs adapting to be used by the Client.
4. **Client Class**: This uses the Target interface.

### Example:

#### 1. `ITarget.cs` - Target Interface
```csharp
public interface ITarget
{
    string GetRequest();
}
```
*Explanation*: `ITarget` is the interface expected by the `Client`. It defines the domain-specific interface that `Client` uses.

#### 2. `Adaptee.cs` - Adaptee Class
```csharp
public class Adaptee
{
    public string GetSpecificRequest()
    {
        return "Specific request.";
    }
}

```
*Explanation*: `Adaptee` is the class that has a different interface and needs to be adapted.

#### 3. `Adapter.cs` - Adapter Class
```csharp
public class Adapter : ITarget
{
    private readonly Adaptee _adaptee;

    public Adapter(Adaptee adaptee)
    {
        _adaptee = adaptee;
    }

    public string GetRequest()
    {
        return $"This is '{_adaptee.GetSpecificRequest()}'";
    }
}
```
*Explanation*: `Adapter` makes `Adaptee`'s interface compatible with the `ITarget` interface.

#### 4. `Client.cs` - Client Class
```csharp
public class Client
{
    public void Main()
    {
        Adaptee adaptee = new Adaptee();
        ITarget target = new Adapter(adaptee);

        Console.WriteLine("Adaptee interface is incompatible with the client.");
        Console.WriteLine("But with adapter client can call it's method.");

        Console.WriteLine(target.GetRequest());
    }
}
```
*Explanation*: `Client` is a class that depends on the `ITarget` interface. It's unaware of `Adaptee` and `Adapter`.

#### 5. `Program.cs` - Main Program
```csharp
class Program
{
    static void Main(string[] args)
    {
        new Client().Main();
    }
}
```
*Explanation*: This is the entry point of the program, creating and running the client's main method.

### Order of Creation:
1. `ITarget.cs`
2. `Adaptee.cs`
3. `Adapter.cs`
4. `Client.cs`
5. `Program.cs`

### Expected Output When Running the Code:
```
Adaptee interface is incompatible with the client.
But with adapter client can call it's method.
This is 'Specific request.'
```

This example demonstrates how the Adapter pattern can be used to integrate classes with incompatible interfaces. The `Client` can use the `Adaptee` via the `Adapter` without changing its code.
