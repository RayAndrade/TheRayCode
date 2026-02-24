[up](../README.md)

Let's adapt the Builder design pattern example to a meal-building scenario. We'll create a system to build different types of meals, such as a standard meal and a vegetarian meal.

### Example Scenario: Building a Meal

#### 1. `Meal.cs` - The Product

```csharp
public class Meal
{
    public string MainCourse { get; set; }
    public string Side { get; set; }
    public string Drink { get; set; }

    public override string ToString()
    {
        return $"Main Course: {MainCourse}, Side: {Side}, Drink: {Drink}";
    }
}
```

- **Explanation**: This class represents the complex object (meal) to be built, with properties for the main course, side, and drink.

#### 2. `IMealBuilder.cs` - The Builder Interface

```csharp
public interface IMealBuilder
{
    void BuildMainCourse();
    void BuildSide();
    void BuildDrink();
    Meal GetMeal();
}
```

- **Explanation**: This interface defines the steps to build a meal. Any builder implementing this interface will provide specific implementations for these methods.

#### 3. `StandardMealBuilder.cs` - Concrete Builder for a Standard Meal

```csharp
public class StandardMealBuilder : IMealBuilder
{
    private Meal _meal = new Meal();

    public void BuildMainCourse()
    {
        _meal.MainCourse = "Steak";
    }

    public void BuildSide()
    {
        _meal.Side = "Fries";
    }

    public void BuildDrink()
    {
        _meal.Drink = "Cola";
    }

    public Meal GetMeal()
    {
        return _meal;
    }
}
```

- **Explanation**: This class implements the `IMealBuilder` for a standard meal.

#### 4. `VegetarianMealBuilder.cs` - Concrete Builder for a Vegetarian Meal

```csharp
public class VegetarianMealBuilder : IMealBuilder
{
    private Meal _meal = new Meal();

    public void BuildMainCourse()
    {
        _meal.MainCourse = "Veggie Burger";
    }

    public void BuildSide()
    {
        _meal.Side = "Salad";
    }

    public void BuildDrink()
    {
        _meal.Drink = "Juice";
    }

    public Meal GetMeal()
    {
        return _meal;
    }
}
```

- **Explanation**: This class implements the `IMealBuilder` for a vegetarian meal.

#### 5. `Director.cs` - The Director

```csharp
public class Director
{
    private IMealBuilder _mealBuilder;

    public Director(IMealBuilder mealBuilder)
    {
        _mealBuilder = mealBuilder;
    }

    public void ConstructMeal()
    {
        _mealBuilder.BuildMainCourse();
        _mealBuilder.BuildSide();
        _mealBuilder.BuildDrink();
    }

    public Meal GetMeal()
    {
        return _mealBuilder.GetMeal();
    }
}
```

- **Explanation**: The Director class constructs a meal using the Builder interface.

#### 6. `Program.cs` - Demonstrating the Builder

```csharp
class Program
{
    static void Main(string[] args)
    {
        // Building a standard meal
        IMealBuilder standardMealBuilder = new StandardMealBuilder();
        Director director = new Director(standardMealBuilder);
        director.ConstructMeal();
        Meal standardMeal = director.GetMeal();
        Console.WriteLine(standardMeal);

        // Building a vegetarian meal
        IMealBuilder vegetarianMealBuilder = new VegetarianMealBuilder();
        director = new Director(vegetarianMealBuilder);
        director.ConstructMeal();
        Meal vegetarianMeal = director.GetMeal();
        Console.WriteLine(vegetarianMeal);
    }
}
```

- **Explanation**: In the `Main` method, we create two different meal builders - one for a standard meal and another for a vegetarian meal. We then use the director to construct these meals and print them.

### When you run the code:

You should see output like this:

```
Main Course: Steak, Side: Fries, Drink: Cola
Main Course: Veggie Burger, Side: Salad, Drink: Juice
```

### How it Demonstrates the Builder Pattern:

- **Separation of Concerns**: Each builder (`StandardMealBuilder` and `VegetarianMealBuilder`) encapsulates the logic to construct a specific type of meal.
- **Flexibility and Variability**: By simply switching the builder, different types of meals can be constructed using the same construction process.
- **Director's Role**: The Director class manages the building process using the Builder interface, but it's the builder that defines the specific construction of the meal, adhering to the Single Responsibility Principle.

This example shows how the Builder pattern can construct complex objects (meals in this case) by separating the construction process from the representation of the

 objects.
