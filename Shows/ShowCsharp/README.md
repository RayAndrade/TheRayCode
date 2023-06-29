
We'll create a Builder pattern implementation for building a delicious ice cream sundae using C#.

Product - **Sundae**

**Sundae** class: Represents the product, i.e., the ice cream sundae. It has properties to store the base flavor, toppings, and sauce of the sundae. It provides methods to set these components and display the sundae.

```
using System;

class Sundae
{
    private string baseFlavor;
    private string toppings;
    private string sauce;

    public void SetBaseFlavor(string flavor)
    {
        baseFlavor = flavor;
    }

    public void SetToppings(string toppings)
    {
        this.toppings = toppings;
    }

    public void SetSauce(string sauce)
    {
        this.sauce = sauce;
    }

    public void Display()
    {
        Console.WriteLine("Enjoy your delightful sundae!");
        Console.WriteLine($"Base Flavor: {baseFlavor}");
        Console.WriteLine($"Toppings: {toppings}");
        Console.WriteLine($"Sauce: {sauce}");
    }
}
```

Abstract Builder - **ISundaeBuilder**

**ISundaeBuilder** interface: Defines the abstract builder interface. It declares methods for building each part of the sundae.

```
interface ISundaeBuilder
{
    void BuildBaseFlavor();
    void BuildToppings();
    void BuildSauce();
    Sundae GetSundae();
}
```

Concrete Builder - **ChocolateSundaeBuilder**

**ChocolateSundaeBuilder** class: Implements the ISundaeBuilder interface to build a chocolate sundae. 
It constructs the sundae step by step, setting the base flavor, toppings, and sauce with chocolate-related elements. 
It provides a method to retrieve the final sundae.
```
class ChocolateSundaeBuilder : ISundaeBuilder
{
    private Sundae sundae;

    public ChocolateSundaeBuilder()
    {
        sundae = new Sundae();
    }

    public void BuildBaseFlavor()
    {
        sundae.SetBaseFlavor("Chocolate");
    }

    public void BuildToppings()
    {
        sundae.SetToppings("Sprinkles, nuts, whipped cream");
    }

    public void BuildSauce()
    {
        sundae.SetSauce("Chocolate sauce");
    }

    public Sundae GetSundae()
    {
        return sundae;
    }
}
```

Concrete Builder - **StrawberrySundaeBuilder**

**StrawberrySundaeBuilder** class: Also implements the ISundaeBuilder interface to build a strawberry sundae. 
It constructs the sundae by setting the base flavor, toppings, and sauce with strawberry-related elements. 
It also provides a method to retrieve the final sundae.
```
class StrawberrySundaeBuilder : ISundaeBuilder
{
    private Sundae sundae;

    public StrawberrySundaeBuilder()
    {
        sundae = new Sundae();
    }

    public void BuildBaseFlavor()
    {
        sundae.SetBaseFlavor("Strawberry");
    }

    public void BuildToppings()
    {
        sundae.SetToppings("Fresh strawberries, cookie crumbs, whipped cream");
    }

    public void BuildSauce()
    {
        sundae.SetSauce("Strawberry sauce");
    }

    public Sundae GetSundae()
    {
        return sundae;
    }
}
```

Director - **SundaeMaker**

**SundaeMaker** class: Acts as the director and manages the construction process. 
It takes a specific ISundaeBuilder instance, calls the builder's methods in the desired order, and returns the final sundae.

```
class SundaeMaker
{
    private ISundaeBuilder sundaeBuilder;

    public void SetSundaeBuilder(ISundaeBuilder builder)
    {
        sundaeBuilder = builder;
    }

    public Sundae BuildSundae()
    {
        sundaeBuilder.BuildBaseFlavor();
        sundaeBuilder.BuildToppings();
        sundaeBuilder.BuildSauce();
        return sundaeBuilder.GetSundae();
    }
}
```

Client
**Program** class: Represents the client code that uses the builder pattern. 
It creates an instance of SundaeMaker and sets different builders for chocolate and strawberry sundaes. 
It then builds and displays both sundaes.
```
class Program
{
    static void Main()
    {
        SundaeMaker sundaeMaker = new SundaeMaker();

        // Create a chocolate sundae
        ISundaeBuilder chocolateBuilder = new ChocolateSundaeBuilder();
        sundaeMaker.SetSundaeBuilder(chocolateBuilder);
        Sundae chocolateSundae = sundaeMaker.BuildSundae();

        // Create a strawberry sundae
        ISundaeBuilder strawberryBuilder = new StrawberrySundaeBuilder();
        sundaeMaker.SetSundaeBuilder(strawberryBuilder);
        Sundae strawberrySundae = sundaeMaker.BuildSundae();

        // Display the sundaes
        chocolateSundae.Display();
        Console.WriteLine();
        strawberrySundae.Display();
    }
}
```

By applying the Builder pattern, we can construct different types of ice cream sundaes with different base flavors, toppings, and sauces while keeping the construction process separate from the final sundae's representation.

