[top](../README.md)

For your C# teaching module on the Template design pattern, I'll provide a straightforward example that aligns with the descriptions from the "Design Patterns: Elements of Reusable Object-Oriented Software" by the Gang of Four (GoF). The Template design pattern is a behavioral pattern that defines the program skeleton of an algorithm in an operation, deferring some steps to subclasses. It lets one redefine certain steps of an algorithm without changing the algorithm's structure.

Here's how you can structure the example in C#:

### Project Structure
- **AbstractClass.cs**: Base class with a template method and abstract operations.
- **ConcreteClassA.cs**: Subclass that implements the abstract operations.
- **ConcreteClassB.cs**: Another subclass with its own implementation of the abstract operations.
- **Program.cs**: Main entry point to demonstrate the template method pattern.

### 1. AbstractClass.cs
```csharp
using System;

public abstract class AbstractClass
{
    // The 'TemplateMethod' is the skeleton of an algorithm.
    // It is made final to prevent its structure from being altered.
    public void TemplateMethod()
    {
        BaseOperation();
        RequiredOperations1();
        RequiredOperation2();
        Hook1();
    }

    // A common operation used by the template method.
    void BaseOperation()
    {
        Console.WriteLine("BaseOperation: Common operation for all subclasses");
    }

    // These operations have to be implemented in subclasses.
    protected abstract void RequiredOperations1();
    protected abstract void RequiredOperation2();

    // Hooks provide additional extension points in some parts of the algorithm.
    protected virtual void Hook1() { }
}
```

### 2. ConcreteClassA.cs
```csharp
using System;

public class ConcreteClassA : AbstractClass
{
    protected override void RequiredOperations1()
    {
        Console.WriteLine("ConcreteClassA: Implemented RequiredOperations1");
    }

    protected override void RequiredOperation2()
    {
        Console.WriteLine("ConcreteClassA: Implemented RequiredOperation2");
    }

    protected override void Hook1()
    {
        Console.WriteLine("ConcreteClassA: Overridden Hook1");
    }
}
```

### 3. ConcreteClassB.cs
```csharp
using System;

public class ConcreteClassB : AbstractClass
{
    protected override void RequiredOperations1()
    {
        Console.WriteLine("ConcreteClassB: Implemented RequiredOperations1");
    }

    protected override void RequiredOperation2()
    {
        Console.WriteLine("ConcreteClassB: Implemented RequiredOperation2");
    }

    // Hook1 is not overridden here, so it will do nothing.
}
```

### 4. Program.cs
```csharp
using System;

class Program
{
    static void Main()
    {
        Console.WriteLine("Testing ConcreteClassA:");
        AbstractClass classA = new ConcreteClassA();
        classA.TemplateMethod();

        Console.WriteLine("\nTesting ConcreteClassB:");
        AbstractClass classB = new ConcreteClassB();
        classB.TemplateMethod();
    }
}
```

### Order of Creating Classes
1. **AbstractClass.cs**: Define the template and the overall structure of the algorithm.
2. **ConcreteClassA.cs and ConcreteClassB.cs**: Implement the specific steps required by the algorithm.
3. **Program.cs**: Test and demonstrate the usage of the template method with different subclasses.

### Expected Output When Running the Program
When you run the `Program.cs`, you should expect the following output:

```
Testing ConcreteClassA:
BaseOperation: Common operation for all subclasses
ConcreteClassA: Implemented RequiredOperations1
ConcreteClassA: Implemented RequiredOperation2
ConcreteClassA: Overridden Hook1

Testing ConcreteClassB:
BaseOperation: Common operation for all subclasses
ConcreteClassB: Implemented RequiredOperations1
ConcreteClassB: Implemented RequiredOperation2
```

This example provides a clear demonstration of how the Template design pattern allows for the algorithm's structure to remain unchanged while the specific steps can vary between different subclasses.
