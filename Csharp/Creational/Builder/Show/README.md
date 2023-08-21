# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**


The Builder design pattern is used to construct a complex object step by step, and the final step will return the object. The process of constructing an object should be independent of the parts that make up the object.

Here's a simple example of the Builder pattern in C# with an application that helps in building a `Computer`.

**1. Product (Computer.cs)**

This class represents the complex object under construction. 

```csharp
// Computer.cs

namespace Show
{
    public class Computer
    {
        public string CPU { get; set; }
        public string RAM { get; set; }
        public string HDD { get; set; }

        public override string ToString()
        {
            return $"CPU: {CPU}, RAM: {RAM}, HDD: {HDD}";
        }
    }
}
```

**2. Builder Interface (ComputerBuilder.cs)**

This abstract interface declares the step-by-step creation methods.

```csharp
// ComputerBuilder.cs

namespace Show
{
    public interface ComputerBuilder
    {
        void AddCPU(string cpu);
        void AddRAM(string ram);
        void AddHDD(string hdd);
        Computer GetComputer();
    }
}
```

**3. Concrete Builder (GamingComputerBuilder.cs)**

This class implements the `ComputerBuilder` interface to create and assemble the `Computer` object.

```csharp
// GamingComputerBuilder.cs

namespace Show
{
    public class GamingComputerBuilder : ComputerBuilder
    {
        private Computer _computer = new Computer();

        public void AddCPU(string cpu)
        {
            _computer.CPU = cpu;
        }

        public void AddRAM(string ram)
        {
            _computer.RAM = ram;
        }

        public void AddHDD(string hdd)
        {
            _computer.HDD = hdd;
        }

        public Computer GetComputer()
        {
            return _computer;
        }
    }
}
```

**4. Director (ComputerDirector.cs)**

This class is responsible for constructing the product using the Builder interface.

```csharp
// ComputerDirector.cs

namespace Show
{
    public class ComputerDirector
    {
        public Computer Build(ComputerBuilder builder)
        {
            builder.AddCPU("Intel i9");
            builder.AddRAM("32GB");
            builder.AddHDD("1TB SSD");
            return builder.GetComputer();
        }
    }
}
```

**5. Program (Program.cs)**

This is the main program where you'll see how the Builder pattern is used.

```csharp
// Program.cs
using System;

namespace Show
{
    class Program
    {
        static void Main(string[] args)
        {
            ComputerDirector director = new ComputerDirector();
            ComputerBuilder builder = new GamingComputerBuilder();
            
            Computer gamingComputer = director.Build(builder);

            Console.WriteLine("Gaming Computer Specs:");
            Console.WriteLine(gamingComputer.ToString());
        }
    }
}
```

In this example:

- `Computer` is the product to be constructed.
- `ComputerBuilder` is the abstract builder interface that declares the construction steps.
- `GamingComputerBuilder` is a concrete builder that implements the construction steps to build the `Computer`.
- `ComputerDirector` uses the `ComputerBuilder` to construct the `Computer`.
- In the `Program` class, we create a `ComputerDirector`, a `GamingComputerBuilder`, and then use the director to construct a gaming computer.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)


The Builder design pattern decouples the construction of a complex object from its representation, allowing the same construction process to create different representations.
