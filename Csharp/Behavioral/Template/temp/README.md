[top](../README.md)

The Template Method pattern is a fundamental behavioral design pattern that defines the program skeleton of an algorithm in a method, deferring some steps to subclasses. It lets subclasses redefine certain steps of an algorithm without changing the algorithm's structure.

For this example, let's consider a simple application where we have an abstract class named `AbstractClass` with a template method named `TemplateMethod()` and two abstract operations `PrimitiveOperation1()` and `PrimitiveOperation2()`. Concrete classes `ConcreteClassA` and `ConcreteClassB` will implement these operations.

### Step 1: Define the AbstractClass.cs

```csharp
// AbstractClass.cs
using System;

public abstract class AbstractClass
{
    // The template method defines the skeleton of an algorithm.
    public void TemplateMethod()
    {
        PrimitiveOperation1();
        PrimitiveOperation2();
        Console.WriteLine("");
    }

    // These operations have to be implemented in subclasses.
    protected abstract void PrimitiveOperation1();
    protected abstract void PrimitiveOperation2();
}
```

**Explanation:**
- `AbstractClass`: The abstract base class defines the template method `TemplateMethod()` that calls two abstract methods `PrimitiveOperation1()` and `PrimitiveOperation2()`. These methods are placeholders for concrete operations and must be implemented by subclasses.

### Step 2: Define Concrete Classes

#### ConcreteClassA.cs

```csharp
// ConcreteClassA.cs
using System;

public class ConcreteClassA : AbstractClass
{
    protected override void PrimitiveOperation1()
    {
        Console.WriteLine("ConcreteClassA.PrimitiveOperation1()");
    }

    protected override void PrimitiveOperation2()
    {
        Console.WriteLine("ConcreteClassA.PrimitiveOperation2()");
    }
}
```

**Explanation:**
- `ConcreteClassA`: Implements the abstract operations `PrimitiveOperation1()` and `PrimitiveOperation2()` that are called by the template method. Each method provides the class-specific behavior.

#### ConcreteClassB.cs

```csharp
// ConcreteClassB.cs
using System;

public class ConcreteClassB : AbstractClass
{
    protected override void PrimitiveOperation1()
    {
        Console.WriteLine("ConcreteClassB.PrimitiveOperation1()");
    }

    protected override void PrimitiveOperation2()
    {
        Console.WriteLine("ConcreteClassB.PrimitiveOperation2()");
    }
}
```

**Explanation:**
- `ConcreteClassB`: Similar to `ConcreteClassA`, it implements the abstract operations required by the `AbstractClass`, providing its own version of these operations.

### Step 3: Program.cs (Demonstration)

```csharp
// Program.cs
using System;

class Program
{
    static void Main(string[] args)
    {
        AbstractClass a = new ConcreteClassA();
        AbstractClass b = new ConcreteClassB();

        // The template method is called.
        a.TemplateMethod();
        b.TemplateMethod();
    }
}
```

**Explanation:**
- `Program.cs`: This is where we demonstrate the Template Method pattern. We instantiate `ConcreteClassA` and `ConcreteClassB`, which are both subclasses of `AbstractClass`. By calling `TemplateMethod()` on these instances, we execute the steps defined in the abstract class in the specific order, but with the subclass-specific implementations.

### Order of Creation

1. **AbstractClass.cs**: Start with the abstract class to define the template of the algorithm and the abstract operations.
2. **ConcreteClassA.cs & ConcreteClassB.cs**: Implement the specifics of the abstract operations defined in `AbstractClass`.
3. **Program.cs**: Finally, create the main entry point of the application to demonstrate the usage of the template method pattern.

### Expected Output

When you run the program, you should see the following output, demonstrating that each class's specific operations are called in the order dictated by the template method:

```
ConcreteClassA.PrimitiveOperation1()
ConcreteClassA.PrimitiveOperation2()

ConcreteClassB.PrimitiveOperation1()
ConcreteClassB.PrimitiveOperation2()
```

This output confirms that the Template Method pattern allows the algorithm's structure to be invariant while letting subclasses provide the specific implementation of the steps.
