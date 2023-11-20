[up](../README.md)

The Decorator design pattern is a structural pattern used to extend the functionality of objects by wrapping them with other objects. In C#, this can be achieved by using abstract classes or interfaces to define a standard interface for objects that can have responsibilities added to them dynamically.

Let's create an example in C# using the Decorator pattern. We'll design a simple coffee ordering system, where you can add extras (like milk, sugar, whipped cream) to your basic coffee order. Each component and decorator will be in its own .cs file.

### Project Structure

1. **CoffeeComponent.cs**: Defines the interface for objects that can have responsibilities added to them.
2. **BasicCoffee.cs**: A concrete component implementing `CoffeeComponent`.
3. **CoffeeDecorator.cs**: An abstract decorator class that extends `CoffeeComponent`.
4. **MilkDecorator.cs**, **SugarDecorator.cs**, **WhippedCreamDecorator.cs**: Concrete decorators extending `CoffeeDecorator`.
5. **Program.cs**: The main entry point of the program to demonstrate the usage.

### CoffeeComponent.cs

```csharp
public abstract class CoffeeComponent
{
    public abstract string GetDescription();
    public abstract double GetCost();
}
```

### BasicCoffee.cs

```csharp
public class BasicCoffee : CoffeeComponent
{
    public override string GetDescription()
    {
        return "Basic Coffee";
    }

    public override double GetCost()
    {
        return 1.00; // base price
    }
}
```

### CoffeeDecorator.cs

```csharp
public abstract class CoffeeDecorator : CoffeeComponent
{
    protected CoffeeComponent _coffeeComponent;

    public CoffeeDecorator(CoffeeComponent coffeeComponent)
    {
        _coffeeComponent = coffeeComponent;
    }

    public override string GetDescription()
    {
        return _coffeeComponent.GetDescription();
    }

    public override double GetCost()
    {
        return _coffeeComponent.GetCost();
    }
}
```

### MilkDecorator.cs

```csharp
public class MilkDecorator : CoffeeDecorator
{
    public MilkDecorator(CoffeeComponent coffeeComponent) : base(coffeeComponent) {}

    public override string GetDescription()
    {
        return base.GetDescription() + ", Milk";
    }

    public override double GetCost()
    {
        return base.GetCost() + 0.50;
    }
}
```

Let's create the `SugarDecorator.cs` class similar to the `MilkDecorator.cs`, but this time it will add sugar to the coffee.

### SugarDecorator.cs

```csharp
public class SugarDecorator : CoffeeDecorator
{
    public SugarDecorator(CoffeeComponent coffeeComponent) : base(coffeeComponent) {}

    public override string GetDescription()
    {
        return base.GetDescription() + ", Sugar";
    }

    public override double GetCost()
    {
        return base.GetCost() + 0.20; // additional cost for sugar
    }
}
```

In this class:
- The constructor takes a `CoffeeComponent` object and passes it to the base `CoffeeDecorator` class.
- `GetDescription()` appends ", Sugar" to the current description.
- `GetCost()` adds an additional cost for sugar (in this example, $0.20) to the current cost of the coffee.

When you use this `SugarDecorator` in your `Program.cs` file, it will add the functionality (both description and cost) of sugar to your coffee order. For instance, wrapping a `BasicCoffee` object with `MilkDecorator` and then `SugarDecorator` will result in a description of "Basic Coffee, Milk, Sugar" and the corresponding cumulative cost.


### WhippedCreamDecorator.cs

(Similar to MilkDecorator, but adds whipped cream.)

### Program.cs

```csharp
class Program
{
    static void Main(string[] args)
    {
        CoffeeComponent myCoffee = new BasicCoffee();
        myCoffee = new MilkDecorator(myCoffee);
        myCoffee = new SugarDecorator(myCoffee);

        Console.WriteLine($"{myCoffee.GetDescription()} Cost: ${myCoffee.GetCost()}");
        // Output: Basic Coffee, Milk, Sugar Cost: $1.50
    }
}
```

### Order of Creating Classes

1. **CoffeeComponent.cs**: Base interface.
2. **BasicCoffee.cs**: Concrete component.
3. **CoffeeDecorator.cs**: Abstract decorator.
4. **Concrete Decorators**: MilkDecorator, SugarDecorator, WhippedCreamDecorator.
5. **Program.cs**: To demonstrate the pattern.

When you run this code, you will see the description and cost of your coffee order printed on the console, including the base coffee and any added ingredients. This example demonstrates how the Decorator pattern can dynamically add responsibilities to objects.
