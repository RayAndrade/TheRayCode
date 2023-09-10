

**IGraphicElement.cs**

```csharp
public interface IGraphicElement
{
    void Draw();
}
```

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




























