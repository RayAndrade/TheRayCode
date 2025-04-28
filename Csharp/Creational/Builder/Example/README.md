[up](../README.md)

Here is a **C# implementation of the Builder Design Pattern**, a **Creational** design pattern, based on the structure provided in the *Gang of Four* book. Each class is presented in its own file, and all lines of code are commented to help your students understand each part.

---

### 🔧 Class Creation Order

1. **Product.cs** – The complex object that is to be built.
2. **Builder.cs** – The abstract interface for creating parts of a Product.
3. **ConcreteBuilder.cs** – Implements the Builder interface and assembles the parts.
4. **Director.cs** – Constructs an object using the Builder interface.
5. **Program.cs** – Demonstrates usage.

---

## `Product.cs`
```csharp
// Represents the complex object being built
public class Product
{
    private List<string> _parts = new List<string>(); // List to store product parts

    // Adds a part to the product
    public void Add(string part)
    {
        _parts.Add(part);
    }

    // Display all parts of the product
    public void Show()
    {
        Console.WriteLine("Product Parts:");
        foreach (string part in _parts)
        {
            Console.WriteLine("- " + part);
        }
    }
}
```

---

## `Builder.cs`
```csharp
// The Builder interface specifies methods for building the parts of a Product
public abstract class Builder
{
    public abstract void BuildPartA(); // Step to build Part A
    public abstract void BuildPartB(); // Step to build Part B
    public abstract Product GetResult(); // Returns the final product
}
```

---

## `ConcreteBuilder.cs`
```csharp
// ConcreteBuilder constructs and assembles parts of the product
public class ConcreteBuilder : Builder
{
    private Product _product = new Product(); // The product instance being built

    public override void BuildPartA()
    {
        _product.Add("PartA"); // Adds PartA to the product
    }

    public override void BuildPartB()
    {
        _product.Add("PartB"); // Adds PartB to the product
    }

    public override Product GetResult()
    {
        return _product; // Returns the fully built product
    }
}
```

---

## `Director.cs`
```csharp
// The Director is responsible for constructing the product using the builder
public class Director
{
    public void Construct(Builder builder)
    {
        builder.BuildPartA(); // Instruct builder to build Part A
        builder.BuildPartB(); // Instruct builder to build Part B
    }
}
```

---

## `Program.cs`
```csharp
// Client code demonstrating how to use the Builder pattern
class Program
{
    static void Main(string[] args)
    {
        Director director = new Director(); // Initializes the director
        Builder builder = new ConcreteBuilder(); // Initializes a concrete builder

        director.Construct(builder); // Directs the builder to build the product

        Product product = builder.GetResult(); // Retrieves the final product
        product.Show(); // Displays the product parts
    }
}
```

---


