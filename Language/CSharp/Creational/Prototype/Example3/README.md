[up](../README.md)

For your C# lesson on the Prototype Design Pattern, we'll use a hospital theme involving doctors. The Prototype Design Pattern is a creational design pattern that allows an object to create a copy of itself. It's useful when the creation of an object is more convenient through copying an existing instance rather than creating from scratch.

### 1. DoctorPrototype.cs
This class represents the prototype, an abstract base class defining the `Clone` method, which must be implemented by concrete prototypes.

```csharp
public abstract class DoctorPrototype
{
    // Add necessary properties for a doctor
    public string Name { get; set; }
    public string Specialty { get; set; }

    // The Clone method
    public abstract DoctorPrototype Clone();
}
```

### 2. ConcreteDoctor.cs
This class is a concrete implementation of `DoctorPrototype`. It overrides the `Clone` method to return a copy of itself.

```csharp
public class ConcreteDoctor : DoctorPrototype
{
    public ConcreteDoctor(string name, string specialty)
    {
        Name = name;
        Specialty = specialty;
    }

    // Implementing the Clone method
    public override DoctorPrototype Clone()
    {
        // Shallow copy (for deep copy, manually copy deeper elements)
        return this.MemberwiseClone() as DoctorPrototype;
    }
}
```

### 3. Program.cs
This file demonstrates the use of the Prototype Pattern.

```csharp
class Program
{
    static void Main(string[] args)
    {
        // Create an initial doctor object
        ConcreteDoctor originalDoctor = new ConcreteDoctor("Dr. Smith", "Cardiology");

        // Clone the doctor object
        ConcreteDoctor clonedDoctor = originalDoctor.Clone() as ConcreteDoctor;

        // Displaying the result
        Console.WriteLine("Original Doctor: " + originalDoctor.Name + " - " + originalDoctor.Specialty);
        Console.WriteLine("Cloned Doctor: " + clonedDoctor.Name + " - " + clonedDoctor.Specialty);
    }
}
```

### Project Creation Order:
1. **DoctorPrototype.cs:** Establishes the prototype.
2. **ConcreteDoctor.cs:** Implements the concrete prototype.
3. **Program.cs:** Demonstrates the pattern usage.

### Running the Program:
When you run the program, you should see:
```
Original Doctor: Dr. Smith - Cardiology
Cloned Doctor: Dr. Smith - Cardiology
```

This output demonstrates that a new `ConcreteDoctor` object has been created as a clone of the original doctor, with the same name and specialty. This example uses shallow copying, which is sufficient for simple properties like strings. For more complex objects, deep copying might be necessary.
