# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**C# Builder Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| **Builder**| [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |

[script](./script/page01.md)

The **Builder pattern** is a creational design pattern that lets you construct complex objects step by step. It separates the construction of an object from its representation so that the same construction process can create different representations. It's particularly useful when you need to create an object with lots of possible configuration options.

Below is a simple implementation of the Builder pattern in C#, using a Pizza as the object to build:

Firstly, let's create the **Pizza** class, this will be the object we're building.

```
public class Pizza
{
    public string Dough { get; set; }
    public string Sauce { get; set; }
    public string Topping { get; set; }

    public void DisplayPizza()
    {
        Console.WriteLine($"Dough: {Dough}, Sauce: {Sauce}, Topping: {Topping}");
    }
}
```

Next, we create the **IPizzaBuilder** *interface*. This interface defines all the steps needed to create a **Pizza**.

```
public interface IPizzaBuilder
{
    void BuildDough();
    void BuildSauce();
    void BuildTopping();
    Pizza GetPizza();
}
```
Now, we can create the *PizzaBuilder class* that implements the **IPizzaBuilder** *interface*. This class represents a specific type of Pizza, in this case, a **MargheritaPizzaBuilder**.

```
public class MargheritaPizzaBuilder : IPizzaBuilder
{
    private Pizza _pizza = new Pizza();

    public MargheritaPizzaBuilder()
    {
        this.Reset();
    }

    public void Reset()
    {
        this._pizza = new Pizza();
    }

    public void BuildDough()
    {
        this._pizza.Dough = "Regular";
    }

    public void BuildSauce()
    {
        this._pizza.Sauce = "Tomato";
    }

    public void BuildTopping()
    {
        this._pizza.Topping = "Cheese";
    }

    public Pizza GetPizza()
    {
        Pizza result = this._pizza;
        this.Reset();
        return result;
    }
}
```

Then, we have the **Director** class, which will use the builder interface to construct the complex objects step by step.

```
public class Director
{
    private IPizzaBuilder _pizzaBuilder;

    public Director(IPizzaBuilder pizzaBuilder)
    {
        this._pizzaBuilder = pizzaBuilder;
    }

    public void makePizza()
    {
        this._pizzaBuilder.BuildDough();
        this._pizzaBuilder.BuildSauce();
        this._pizzaBuilder.BuildTopping();
    }
}
```
Finally, we can test this in a **Main** method:
```
class Program
{
    static void Main(string[] args)
    {
        // Create a margherita pizza builder
        var pizzaBuilder = new MargheritaPizzaBuilder();

        // Pass the pizza builder to the director
        var director = new Director(pizzaBuilder);

        // Use the director to make the pizza
        director.makePizza();

        // Retrieve the finished pizza
        var pizza = pizzaBuilder.GetPizza();

        // Display the pizza
        pizza.DisplayPizza();
    }
}
```
When you run this, you'll get the output:
```
Dough: Regular, Sauce: Tomato, Topping: Cheese
```

Here's the explanation of each class:

**Pizza**: This is the complex object that we are trying to build. It consists of multiple parts.

**IPizzaBuilder**: This is the builder interface that specifies the steps needed to create a Pizza.

**MargheritaPizzaBuilder**: This is a concrete builder that implements the builder interface IPizzaBuilder and provides

**The Ray Code is AWESOME!!!**

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
