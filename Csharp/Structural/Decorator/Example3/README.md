[up](../README.md)

The Composite design pattern is ideal for scenarios where you want to treat individual objects and compositions of those objects uniformly. Let's use a cake dessert story to explain this pattern in a C# context. Imagine a dessert menu that includes various types of cakes, where each cake can be either a simple cake or a composite cake made up of different flavors.

### The Cake Dessert Story - Composite Design Pattern

1. **Component (ICakeComponent.cs):**
    - Represents the interface for all components (simple and composite) in the cake hierarchy.

2. **Leaf (SimpleCake.cs):**
    - Represents individual cakes without any sub-cakes.

3. **Composite (CompositeCake.cs):**
    - Represents cakes that consist of a combination of other cakes (simple or composite).

4. **Client (Program.cs):**
    - Demonstrates the use of the Composite pattern.

### Implementation

#### 1. ICakeComponent.cs
```csharp
public interface ICakeComponent
{
    string GetName();
    void Display(int depth);
}
```
- **GetName**: Returns the name of the cake.
- **Display**: Displays the cake's name and its depth in the cake hierarchy.

#### 2. SimpleCake.cs
```csharp
public class SimpleCake : ICakeComponent
{
    private string _name;

    public SimpleCake(string name)
    {
        _name = name;
    }

    public string GetName()
    {
        return _name;
    }

    public void Display(int depth)
    {
        Console.WriteLine(new String('-', depth) + _name);
    }
}
```
- **_name**: Holds the name of the cake.
- **SimpleCake(string name)**: Constructor to set the cake's name.
- **GetName and Display**: Implementations from `ICakeComponent`.

#### 3. CompositeCake.cs
```csharp
public class CompositeCake : ICakeComponent
{
    private List<ICakeComponent> _children = new List<ICakeComponent>();
    private string _name;

    public CompositeCake(string name)
    {
        _name = name;
    }

    public void Add(ICakeComponent component)
    {
        _children.Add(component);
    }

    public string GetName()
    {
        return _name;
    }

    public void Display(int depth)
    {
        Console.WriteLine(new String('-', depth) + _name);
        foreach (ICakeComponent component in _children)
        {
            component.Display(depth + 2);
        }
    }
}
```
- **_children**: A list of child cakes.
- **CompositeCake(string name)**: Constructor to set the composite cake's name.
- **Add**: Adds a child cake.
- **GetName and Display**: Implementations from `ICakeComponent`.

#### 4. Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        CompositeCake mainDessert = new CompositeCake("Main Dessert Platter");
        SimpleCake chocolateCake = new SimpleCake("Chocolate Cake");
        SimpleCake vanillaCake = new SimpleCake("Vanilla Cake");
        CompositeCake mixedFruitCake = new CompositeCake("Mixed Fruit Cake");

        mainDessert.Add(chocolateCake);
        mainDessert.Add(vanillaCake);
        mainDessert.Add(mixedFruitCake);

        mixedFruitCake.Add(new SimpleCake("Apple Cake"));
        mixedFruitCake.Add(new SimpleCake("Berry Cake"));

        mainDessert.Display(1);
    }
}
```
- This is the entry point of the application, where we create a main dessert platter, individual cakes, and a composite cake. Finally, we display the hierarchy.

### Running the Program
When you run the program, you should see an output like this:

```
- Main Dessert Platter
-- Chocolate Cake
-- Vanilla Cake
-- Mixed Fruit Cake
---- Apple Cake
---- Berry Cake
```

This output represents a dessert menu with a variety of cakes, showcasing how the Composite pattern allows for treating individual and composite objects (cakes, in this case) uniformly.
