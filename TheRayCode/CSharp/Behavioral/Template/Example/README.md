[top](../README.md)  [script](script/page01.md)

The Template Method pattern is a fundamental design pattern in object-oriented programming that defines the program skeleton of an algorithm in a method, deferring some steps to subclasses. It allows subclasses to redefine certain steps of an algorithm without changing the algorithm's structure.

In the context of the "Design Patterns" book by the Gang of Four, the Template Method pattern is categorized under behavioral design patterns because it's used to manage algorithms, relationships, and responsibilities between objects.

Here’s a simple example to demonstrate the Template Method pattern in C#. We'll create a base class named `AbstractClass` that contains the template method and parts of the algorithm that are invariant. The steps that may vary are implemented in subclasses. In our example, we'll create two concrete classes, `ConcreteClassA` and `ConcreteClassB`, that inherit from `AbstractClass` and provide their own implementation of the abstract methods.

### AbstractClass.cs

```csharp
using System;

public abstract class AbstractClass
{
    // The template method defines the skeleton of an algorithm.
    public void TemplateMethod()
    {
        BaseOperation();
        RequiredOperations();
        OptionalHook();
    }

    // A common operation used by all subclasses.
    protected void BaseOperation()
    {
        Console.WriteLine("Base Operation: Common to all classes.");
    }

    // A step that must be implemented by subclasses.
    protected abstract void RequiredOperations();

    // A hook operation with a default implementation. Subclasses may override this.
    protected virtual void OptionalHook()
    {
        // Default implementation
    }
}
```

### ConcreteClassA.cs

```csharp
using System;

public class ConcreteClassA : AbstractClass
{
    protected override void RequiredOperations()
    {
        Console.WriteLine("ConcreteClassA: Implemented RequiredOperations.");
    }

    protected override void OptionalHook()
    {
        Console.WriteLine("ConcreteClassA: Overridden OptionalHook.");
    }
}
```

### ConcreteClassB.cs

```csharp
using System;

public class ConcreteClassB : AbstractClass
{
    protected override void RequiredOperations()
    {
        Console.WriteLine("ConcreteClassB: Implemented RequiredOperations.");
    }

    // OptionalHook is not overridden, so it will use the default implementation from AbstractClass
}
```

### Program.cs

```csharp
class Program
{
    static void Main(string[] args)
    {
        AbstractClass a = new ConcreteClassA();
        a.TemplateMethod();

        Console.WriteLine();

        AbstractClass b = new ConcreteClassB();
        b.TemplateMethod();
    }
}
```

### Explanation

- **AbstractClass**: This abstract class defines a template method (`TemplateMethod`) that contains a skeleton of some algorithm, composed of calls to (usually) abstract primitive operations. Concrete subclasses should implement these operations, but leave the template method itself unchanged.

- **ConcreteClassA and ConcreteClassB**: These classes implement the primitive operations to carry out subclass-specific steps of the algorithm. In our example, `ConcreteClassA` provides a specific implementation for `RequiredOperations` and overrides `OptionalHook`, whereas `ConcreteClassB` only implements `RequiredOperations`, using the default `OptionalHook`.

- **Program.cs**: This file contains the `Main` method, which is the entry point of the program. It demonstrates the template method pattern by instantiating both `ConcreteClassA` and `ConcreteClassB` and calling their `TemplateMethod`, which executes the algorithm defined in `AbstractClass`, with specific steps defined in the concrete classes.

### Order to Create the Classes

1. **AbstractClass.cs**: Start with the abstract base class since it defines the template method and the structure of the algorithm.
2. **ConcreteClassA.cs & ConcreteClassB.cs**: Next, implement the concrete classes that inherit from `AbstractClass` and provide specific implementations for the abstract methods defined in the base class.
3. **Program.cs**: Finally, create the `Program.cs` file to demonstrate the usage of the template method pattern.

### Expected Output

When you run the program, you should see the following output:

```
Base Operation: Common to all classes.
ConcreteClassA: Implemented RequiredOperations.
ConcreteClassA: Overridden OptionalHook.

Base Operation: Common to all classes.
ConcreteClassB: Implemented RequiredOperations.
```

This output demonstrates how the template method orchestrates the algorithm, calling both shared operations and subclass-specific implementations.
