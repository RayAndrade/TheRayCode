
The Composite pattern allows you to compose objects into tree-like structures to represent part-whole hierarchies. This makes it easier to work with individual objects and compositions of objects in a consistent manner.

Here's an example using a common scenario: graphic elements in a graphics editor.

### IGraphicElement.cs

```csharp
namespace Composite
{
    public interface IGraphicElement
    {
        void Draw();
    }
}
```

This interface represents both leaf nodes (like a Circle, Rectangle) and composites.

### Circle.cs

```csharp
namespace Composite
{
    public class Circle : IGraphicElement
    {
        public void Draw()
        {
            System.Console.WriteLine("Drawing a Circle.");
        }
    }
}
```

This class represents a circle, which is a leaf in the hierarchy.

### Rectangle.cs

```csharp
namespace Composite
{
    public class Rectangle : IGraphicElement
    {
        public void Draw()
        {
            System.Console.WriteLine("Drawing a Rectangle.");
        }
    }
}
```

Another leaf, representing a rectangle.

### GraphicGroup.cs

```csharp
using System.Collections.Generic;

namespace Composite
{
    public class GraphicGroup : IGraphicElement
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
}
```

This is a composite class. It can have many `IGraphicElement`s, either individual shapes or other groups.

### Program.cs

```csharp
namespace Composite
{
    class Program
    {
        static void Main(string[] args)
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
}
```

**Explanation:**

1. `IGraphicElement` is an interface that both individual graphic elements and their groups implement.
2. `Circle` and `Rectangle` are individual graphic elements. They are considered as the leaf nodes in this hierarchy.
3. `GraphicGroup` can contain both individual graphic elements and other groups, making it a composite.
4. In `Program.cs`, we first create individual graphic elements. Then, we create a graphic group and add the individual graphics to it. Finally, we create another main group and add both individual graphics and the first group to it. When we call `Draw()` on the main group, it recursively draws all the graphic elements it contains.


