[up](../README.md)

Certainly! Let's apply the Builder design pattern to a toy-building scenario. We will design a system to build different types of toys, such as a toy car and a toy robot, each with various components.

### Example Scenario: Building a Toy

#### 1. `Toy.cs` - The Product

```csharp
public class Toy
{
    public string Wheels { get; set; }
    public string Body { get; set; }
    public string Color { get; set; }

    public override string ToString()
    {
        return $"Wheels: {Wheels}, Body: {Body}, Color: {Color}";
    }
}
```

- **Explanation**: This class represents the complex object (toy) to be built. It has properties for wheels, body, and color.

#### 2. `IToyBuilder.cs` - The Builder Interface

```csharp
public interface IToyBuilder
{
    void BuildWheels();
    void BuildBody();
    void Paint();
    Toy GetToy();
}
```

- **Explanation**: This interface defines the steps to build a toy. Any builder implementing this interface will provide implementations for these methods.

#### 3. `ToyCarBuilder.cs` - Concrete Builder for a Toy Car

```csharp
public class ToyCarBuilder : IToyBuilder
{
    private Toy _toy = new Toy();

    public void BuildWheels()
    {
        _toy.Wheels = "4 wheels";
    }

    public void BuildBody()
    {
        _toy.Body = "Car body";
    }

    public void Paint()
    {
        _toy.Color = "Red";
    }

    public Toy GetToy()
    {
        return _toy;
    }
}
```

- **Explanation**: This class implements the `IToyBuilder` for a toy car.

#### 4. `ToyRobotBuilder.cs` - Concrete Builder for a Toy Robot

```csharp
public class ToyRobotBuilder : IToyBuilder
{
    private Toy _toy = new Toy();

    public void BuildWheels()
    {
        _toy.Wheels = "2 wheels and 2 legs";
    }

    public void BuildBody()
    {
        _toy.Body = "Robot body";
    }

    public void Paint()
    {
        _toy.Color = "Silver";
    }

    public Toy GetToy()
    {
        return _toy;
    }
}
```

- **Explanation**: This class implements the `IToyBuilder` for a toy robot.

#### 5. `Director.cs` - The Director

```csharp
public class Director
{
    private IToyBuilder _toyBuilder;

    public Director(IToyBuilder toyBuilder)
    {
        _toyBuilder = toyBuilder;
    }

    public void ConstructToy()
    {
        _toyBuilder.BuildWheels();
        _toyBuilder.BuildBody();
        _toyBuilder.Paint();
    }

    public Toy GetToy()
    {
        return _toyBuilder.GetToy();
    }
}
```

- **Explanation**: The Director class manages the construction process of the toy using the Builder interface.

#### 6. `Program.cs` - Demonstrating the Builder

```csharp
class Program
{
    static void Main(string[] args)
    {
        // Building a toy car
        IToyBuilder carBuilder = new ToyCarBuilder();
        Director director = new Director(carBuilder);
        director.ConstructToy();
        Toy car = director.GetToy();
        Console.WriteLine(car);

        // Building a toy robot
        IToyBuilder robotBuilder = new ToyRobotBuilder();
        director = new Director(robotBuilder);
        director.ConstructToy();
        Toy robot = director.GetToy();
        Console.WriteLine(robot);
    }
}
```

- **Explanation**: In the `Main` method, we create two different toy builders - one for a toy car and another for a toy robot. We then use the director to construct these toys and print their details.

### When you run the code:

You should see output like this:

```
Wheels: 4 wheels, Body: Car body, Color: Red
Wheels: 2 wheels and 2 legs, Body: Robot body, Color: Silver
```

### How it Demonstrates the Builder Pattern:

- **Encapsulation of Construction Logic**: Each builder (`ToyCarBuilder` and `ToyRobotBuilder`) encapsulates the logic to construct a specific type of toy.
- **Flexibility and Variability**: By simply changing the builder, different types of toys can be constructed using the same process.
- **Director's Role**: The Director class orchestrates the building process using the Builder interface, but it's the builder that defines the specific construction of the toy, adhering to the Single Responsibility Principle.

This example demonstrates how the Builder pattern allows for constructing complex objects (toys in this case) by separating the construction process from the representation of the objects.

