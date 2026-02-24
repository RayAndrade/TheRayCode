[up](../README.md)


Certainly! Let's create an example using the Decorator design pattern in C#. In this example, we'll design a cake ordering system where basic cakes can be enhanced with various decorations like icing, sprinkles, and fruit toppings. Each component and decorator will be in its own .cs file.

### Project Structure

1. **CakeComponent.cs**: Defines the interface for cake objects.
2. **BasicCake.cs**: A concrete component implementing `CakeComponent`.
3. **CakeDecorator.cs**: An abstract decorator class that extends `CakeComponent`.
4. **IcingDecorator.cs**, **SprinklesDecorator.cs**, **FruitDecorator.cs**: Concrete decorators extending `CakeDecorator`.
5. **Program.cs**: Demonstrates the usage of the pattern.

### CakeComponent.cs

```csharp
public abstract class CakeComponent
{
    public abstract string Description { get; }
    public abstract double Cost { get; }
}
```

### BasicCake.cs

```csharp
public class BasicCake : CakeComponent
{
    public override string Description => "Basic Cake";

    public override double Cost => 5.00; // base price
}
```

### CakeDecorator.cs

```csharp
public abstract class CakeDecorator : CakeComponent
{
    protected CakeComponent cakeComponent;

    public CakeDecorator(CakeComponent cakeComponent)
    {
        this.cakeComponent = cakeComponent;
    }

    public override string Description => cakeComponent.Description;

    public override double Cost => cakeComponent.Cost;
}
```

### IcingDecorator.cs

```csharp
public class IcingDecorator : CakeDecorator
{
    public IcingDecorator(CakeComponent cakeComponent) : base(cakeComponent) {}

    public override string Description => base.Description + ", with Icing";

    public override double Cost => base.Cost + 2.00; // additional cost for icing
}
```

Let's create the `SprinklesDecorator.cs` and `FruitDecorator.cs` as concrete decorators extending the `CakeDecorator` class in our cake ordering system. These classes will add sprinkles and fruit toppings to the cake, respectively.

### SprinklesDecorator.cs

```csharp
public class SprinklesDecorator : CakeDecorator
{
    public SprinklesDecorator(CakeComponent cakeComponent) : base(cakeComponent) {}

    public override string Description => base.Description + ", with Sprinkles";

    public override double Cost => base.Cost + 1.50; // additional cost for sprinkles
}
```

In `SprinklesDecorator`:
- The constructor takes a `CakeComponent` and passes it to the base `CakeDecorator` class.
- `Description` property is overridden to append ", with Sprinkles" to the current description.
- `Cost` property is overridden to add an additional cost for sprinkles (in this example, $1.50) to the current cost of the cake.

### FruitDecorator.cs

```csharp
public class FruitDecorator : CakeDecorator
{
    public FruitDecorator(CakeComponent cakeComponent) : base(cakeComponent) {}

    public override string Description => base.Description + ", with Fruit Topping";

    public override double Cost => base.Cost + 2.50; // additional cost for fruit topping
}
```

In `FruitDecorator`:
- The constructor is similar to `SprinklesDecorator`, taking a `CakeComponent`.
- `Description` property is overridden to append ", with Fruit Topping".
- `Cost` property is overridden to add an additional cost for fruit topping (in this example, $2.50).

Both these classes follow the Decorator pattern, allowing for the dynamic addition of features (sprinkles and fruit toppings) to a cake. When used in the `Program.cs`, you can create a cake with a combination of these decorations and see the cumulative description and cost. For example, wrapping a `BasicCake` with `IcingDecorator`, `SprinklesDecorator`, and `FruitDecorator` will result in a detailed description of all the added features and their total cost.


### Program.cs

```csharp
class Program
{
    static void Main(string[] args)
    {
        CakeComponent cake = new BasicCake();
        cake = new IcingDecorator(cake);
        cake = new SprinklesDecorator(cake);

        Console.WriteLine($"{cake.Description} Cost: ${cake.Cost}");
        // Output: Basic Cake, with Icing, with Sprinkles Cost: $7.00
    }
}
```

### Explanation of Each Class and Method

- **CakeComponent**: Abstract base class defining the structure for cake objects.
- **BasicCake**: Represents a simple cake without any decorations.
- **CakeDecorator**: Abstract class that serves as a base for all cake decorators. It holds a reference to a `CakeComponent`.
- **IcingDecorator**, **SprinklesDecorator**, **FruitDecorator**: Concrete decorator classes that add specific features (icing, sprinkles, fruit toppings) to the cake.

### Order of Creating Classes

1. **CakeComponent.cs**
2. **BasicCake.cs**
3. **CakeDecorator.cs**
4. **Concrete Decorators**: IcingDecorator, SprinklesDecorator, FruitDecorator.
5. **Program.cs**

### Expected Output When Running the Code

When you run this code, it will display the description and the total cost of the cake with added decorations. For example, if you add icing and sprinkles to a basic cake, it will output: "Basic Cake, with Icing, with Sprinkles Cost: $7.00". This demonstrates how the Decorator pattern allows for dynamic addition of responsibilities to objects.



