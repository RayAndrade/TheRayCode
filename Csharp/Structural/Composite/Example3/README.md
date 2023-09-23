[up](../README.md)

**IGraphicElement.cs**
```csharp
public interface IGraphicElement
{
    void Draw();
}
```

This code defines an interface named `IGraphicElement`. Any class that implements this interface is expected to provide a definition for the `Draw` method. This is essentially a contract that mandates any implementing class to have a drawing capability.

---

**Rectangle.cs**
```csharp
public class Rectangle : IGraphicElement
{
    public void Draw()
    {
        System.Console.WriteLine("Drawing a Rectangle.");
    }
}
```

This code defines a class named `Rectangle` that implements the `IGraphicElement` interface. As per the contract, `Rectangle` provides a definition for the `Draw` method. When called, this method prints out the message "Drawing a Rectangle." to the console.

---

**Circle.cs**
```csharp
public class Circle : IGraphicElement
{
    public void Draw()
    {
        System.Console.WriteLine("Drawing a Circle.");
    }
}
```

Similarly, this code defines a class named `Circle` that implements the `IGraphicElement` interface. Its `Draw` method, when called, prints out the message "Drawing a Circle." to the console.

---

**GraphicGroup.cs**
```csharp
public class GraphicGroup: IGraphicElement
{
    private readonly List<IGraphicElement> _graphics = new List<IGraphicElement>();

    public void Add(IGraphicElement graphic)
    {
        _graphics.Add(graphic);
    }

    public void Remove(IGraphicElement graphic)
    {
        _graphics.Remove(graphic);
    }

    public void Draw()
    {
        foreach(var graphic in _graphics)
        {
            graphic.Draw();
        }
    }
}
```

This class `GraphicGroup` is also implementing the `IGraphicElement` interface. However, it represents a composite graphic element, meaning it can contain multiple `IGraphicElement` items. Internally, it maintains a list of graphic elements (`_graphics`).

- The `Add` method lets you add a graphic element to the group.
- The `Remove` method lets you remove a graphic element from the group.
- The `Draw` method iterates through all the graphic elements in its list and calls their respective `Draw` methods.

---

**Program.cs**
```csharp
internal class Program
{
    public static void Main(string[] args)
    {
        // Create individual graphics
        Circle circle = new Circle();
        Rectangle rectangle = new Rectangle();
            
        // Create a graphic group and add individual graphics to it
        GraphicGroup graphicGroup = new GraphicGroup();
        graphicGroup.Add(circle);
        graphicGroup.Add(rectangle);

        // Create another graphic group and add the first graphic group to it
        GraphicGroup mainGroup = new GraphicGroup();
        mainGroup.Add(graphicGroup);
        mainGroup.Add(new Rectangle());

        // Draw all graphics in the main group
        mainGroup.Draw();
    }
}
```

In the `Program` class's `Main` method:

1. Individual graphic elements, `Circle` and `Rectangle`, are instantiated.
2. A new graphic group (`graphicGroup`) is created, and the individual graphics are added to it.
3. Another graphic group (`mainGroup`) is created. The first graphic group (`graphicGroup`) and a new rectangle are added to it.
4. The `Draw` method of the `mainGroup` is called, which recursively draws all elements in its list.

The expected output for the program would be:
```
Drawing a Circle.
Drawing a Rectangle.
Drawing a Circle.
Drawing a Rectangle.
Drawing a Rectangle.
```

In essence, the given set of classes and interfaces demonstrates the **Composite Pattern**, which allows individual objects and compositions of objects to be treated uniformly. In this context, both individual graphics (like `Circle` and `Rectangle`) and groups of graphics (`GraphicGroup`) can be "drawn" using the same method call.
