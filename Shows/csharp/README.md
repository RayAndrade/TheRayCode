[up](../README.md)


The Builder design pattern is a creational pattern used to construct a complex object step by step. It allows you to produce different types and representations of an object using the same construction code. In C#, this can be implemented using several classes. I'll provide an example and explain each component in detail. 

### Example Scenario: Building a Computer

Let's use the example of building a computer, which consists of various components like CPU, RAM, and a hard drive.

#### 1. `Computer.cs` - The Product

```csharp
public class Computer
{
    public string CPU { get; set; }
    public string RAM { get; set; }
    public string HardDrive { get; set; }

    public override string ToString()
    {
        return $"CPU: {CPU}, RAM: {RAM}, Hard Drive: {HardDrive}";
    }
}
```

- **Explanation**: This class represents the complex object to be built. Here, a computer with properties for CPU, RAM, and Hard Drive.

#### 2. `IComputerBuilder.cs` - The Builder Interface

```csharp
public interface IComputerBuilder
{
    void BuildCPU();
    void BuildRAM();
    void BuildHardDrive();
    Computer GetComputer();
}
```

- **Explanation**: This interface defines all the steps to build a computer. Any builder implementing this interface will provide implementations for these methods.

#### 3. `GamingComputerBuilder.cs` - Concrete Builder

```csharp
public class GamingComputerBuilder : IComputerBuilder
{
    private Computer _computer = new Computer();

    public void BuildCPU()
    {
        _computer.CPU = "High-end CPU";
    }

    public void BuildRAM()
    {
        _computer.RAM = "16GB";
    }

    public void BuildHardDrive()
    {
        _computer.HardDrive = "1TB SSD";
    }

    public Computer GetComputer()
    {
        return _computer;
    }
}
```

- **Explanation**: This is a concrete builder class implementing `IComputerBuilder`. It provides specific implementations for building a gaming computer.

#### 4. `Director.cs` - The Director

```csharp
public class Director
{
    private IComputerBuilder _computerBuilder;

    public Director(IComputerBuilder computerBuilder)
    {
        _computerBuilder = computerBuilder;
    }

    public void ConstructComputer()
    {
        _computerBuilder.BuildCPU();
        _computerBuilder.BuildRAM();
        _computerBuilder.BuildHardDrive();
    }

    public Computer GetComputer()
    {
        return _computerBuilder.GetComputer();
    }
}
```

- **Explanation**: The Director class is used to construct an object using the Builder interface. It does not need to know which concrete builder it gets.

#### 5. `Program.cs` - Demonstrating the Builder

```csharp
class Program
{
    static void Main(string[] args)
    {
        IComputerBuilder builder = new GamingComputerBuilder();
        Director director = new Director(builder);
        director.ConstructComputer();
        Computer computer = director.GetComputer();

        Console.WriteLine(computer);
    }
}
```

- **Explanation**: In the `Main` method, we instantiate a concrete builder (`GamingComputerBuilder`), pass it to the director, and then build the computer. The final product is printed to the console.

### When you run the code:

You should see output like this:

```
CPU: High-end CPU, RAM: 16GB, Hard Drive: 1TB SSD
```

### How it Demonstrates the Builder Pattern:

- **Encapsulation of Construction Logic**: The construction details of a `Computer` object are encapsulated in the `GamingComputerBuilder`. Different builders can create different representations of the product.
- **Flexibility**: By changing the builder, you can get a different type of computer (e.g., OfficeComputerBuilder for an office-oriented computer).
- **Director's Control**: The Director class controls the construction process, but it's the builder that does the actual creation and assembly, thus adhering to the Single Responsibility Principle.

This structure allows you to create complex objects step by step, varying the internal representation of the object while keeping the same construction process.
