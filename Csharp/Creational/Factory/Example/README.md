[up](../README.md)

The Factory design pattern is a creational pattern used in object-oriented programming to create objects without specifying the exact class of object that will be created. This is achieved by creating a separate "factory" class that is responsible for the creation of objects. The main advantage of this pattern is that it promotes loose coupling and scalability.

Let's design a simple example in C# using the Factory pattern. We'll create an application that uses a `VehicleFactory` to create different types of vehicles.

### 1. `Vehicle.cs` - The Product Interface

This interface defines the contract that all concrete products must follow. In our case, every vehicle should have a `StartEngine` method.

```csharp
public interface IVehicle
{
    void StartEngine();
}
```

### 2. `Car.cs` - A Concrete Product

This class implements the `IVehicle` interface. It's one of the types of vehicles our factory can create.

```csharp
using System;

public class Car : IVehicle
{
    public void StartEngine()
    {
        Console.WriteLine("The car engine starts. Vroom!");
    }
}
```

### 3. `Motorcycle.cs` - Another Concrete Product

Another implementation of the `IVehicle` interface.

```csharp
using System;

public class Motorcycle : IVehicle
{
    public void StartEngine()
    {
        Console.WriteLine("The motorcycle engine starts. Vroom Vroom!");
    }
}

```

### 4. `VehicleFactory.cs` - The Factory

This class is the core of the Factory pattern. It decides which class to instantiate.

```csharp
using System;

public static class VehicleFactory
{
    public static IVehicle GetVehicle(string vehicleType)
    {
        switch (vehicleType)
        {
            case "Car":
                return new Car();
            case "Motorcycle":
                return new Motorcycle();
            default:
                throw new ArgumentException("Invalid vehicle type");
        }
    }
}
```

### 5. `Program.cs` - The Client

This is the entry point of the application, where we use the factory to create objects.

```csharp
class Program
{
    static void Main(string[] args)
    {
        IVehicle myCar = VehicleFactory.GetVehicle("Car");
        myCar.StartEngine();

        IVehicle myMotorcycle = VehicleFactory.GetVehicle("Motorcycle");
        myMotorcycle.StartEngine();
    }
}
```

### Order of Creation

1. Start with the `IVehicle` interface.
2. Create the concrete classes `Car` and `Motorcycle`.
3. Implement the `VehicleFactory`.
4. Finally, use the factory in the `Program.cs`.

### Expected Output

When you run the program, you should see:

```
The car engine starts. Vroom!
The motorcycle engine starts. Vroom Vroom!
```

### How This Is An Example of the Factory Design Pattern

- **Abstraction in Creation**: The client (`Program.cs`) is abstracted from the instantiation process of `Car` and `Motorcycle`. It only knows about the `IVehicle` interface.
- **Loose Coupling**: The client is loosely coupled with the concrete classes. If we need to add a new vehicle type, we don’t need to change the client code.
- **Scalability**: New vehicle types can be added easily by just extending the `VehicleFactory`.

This code provides a clear example of the Factory design pattern by separating object creation logic into a different class (`VehicleFactory`), thus promoting loose coupling and scalability.
