[up](../README.md)

Let's apply the Factory design pattern to an airplane scenario. We'll create an `AirplaneFactory` that produces different types of airplanes.

### 1. `IAirplane.cs` - The Product Interface

This interface defines the basic functionalities that all airplane types must implement. In our case, every airplane should have a `Fly` method.

```csharp
public interface IAirplane
{
    void Fly();
}
```

### 2. `Jet.cs` - A Concrete Product

This class implements the `IAirplane` interface. It represents a jet in our airplane factory.

```csharp
public class Jet : IAirplane
{
    public void Fly()
    {
        Console.WriteLine("The jet soars through the sky at high speed!");
    }
}
```

### 3. `PropellerPlane.cs` - Another Concrete Product

Another implementation of the `IAirplane` interface, representing a propeller plane.

```csharp
public class PropellerPlane : IAirplane
{
    public void Fly()
    {
        Console.WriteLine("The propeller plane flies leisurely through the clouds.");
    }
}
```

### 4. `AirplaneFactory.cs` - The Factory

This class is the central component of the Factory pattern. It decides which class to instantiate based on the input.

```csharp
public static class AirplaneFactory
{
    public static IAirplane GetAirplane(string airplaneType)
    {
        switch (airplaneType)
        {
            case "Jet":
                return new Jet();
            case "PropellerPlane":
                return new PropellerPlane();
            default:
                throw new ArgumentException("Invalid airplane type");
        }
    }
}
```

### 5. `Program.cs` - The Client

The entry point of the application, where the factory is used to create airplane objects.

```csharp
class Program
{
    static void Main(string[] args)
    {
        IAirplane myJet = AirplaneFactory.GetAirplane("Jet");
        myJet.Fly();

        IAirplane myPropellerPlane = AirplaneFactory.GetAirplane("PropellerPlane");
        myPropellerPlane.Fly();
    }
}
```

### Order of Creation

1. Start with the `IAirplane` interface.
2. Create the concrete classes `Jet` and `PropellerPlane`.
3. Implement the `AirplaneFactory`.
4. Use the factory in the `Program.cs`.

### Expected Output

When you run the program, you should see:

```
The jet soars through the sky at high speed!
The propeller plane flies leisurely through the clouds.
```

### How This Is An Example of the Factory Design Pattern

- **Abstraction in Creation**: The client (`Program.cs`) is abstracted from the instantiation process of `Jet` and `PropellerPlane`. It only knows about the `IAirplane` interface.
- **Loose Coupling**: The client is loosely coupled with the concrete classes. If we need to add a new airplane type, we don’t need to change the client code.
- **Scalability**: New airplane types can be added easily by just extending the `AirplaneFactory`.

This code demonstrates the Factory design pattern by encapsulating the object creation logic in a separate class (`AirplaneFactory`), promoting loose coupling, and enhancing scalability.
