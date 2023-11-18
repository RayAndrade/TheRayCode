[up](../README.md)

For a different theme utilizing the Bridge design pattern in C#, let's consider a theme of rendering shapes. The abstraction will be different types of shapes (like Circle, Rectangle), and the implementation will be the rendering mechanism (like Drawing API 1, Drawing API 2).

### Structure

1. **`Shape.cs`** - An abstract class representing shapes.
2. **`Circle.cs` and `Rectangle.cs`** - Implementations of the `Shape` class.
3. **`IDrawingAPI.cs`** - An interface for different drawing APIs.
4. **`DrawingAPI1.cs` and `DrawingAPI2.cs`** - Implementations of the `IDrawingAPI` interface.
5. **`Program.cs`** - Main entry point to demonstrate the Bridge pattern.

### Explanation

#### `IDrawingAPI.cs`
```csharp
public interface IDrawingAPI
{
    void DrawCircle(double x, double y, double radius);
    void DrawRectangle(double x, double y, double width, double height);
}
```
- **Purpose**: Interface for drawing APIs.
- **Methods**: Define methods for drawing basic shapes.

#### `DrawingAPI1.cs` and `DrawingAPI2.cs`
```csharp
public class DrawingAPI1 : IDrawingAPI
{
    public void DrawCircle(double x, double y, double radius) 
    {
        Console.WriteLine($"API1 drawing a circle at ({x},{y}) with radius {radius}");
    }

    // Implement DrawRectangle similarly
}

public class DrawingAPI2 : IDrawingAPI
{
    // Similar implementation with different styling or technique
}
```
- **Purpose**: Concrete implementations of the drawing API, each with a unique drawing style.

#### `Shape.cs`
```csharp
public abstract class Shape
{
    protected IDrawingAPI drawingAPI;

    protected Shape(IDrawingAPI drawingAPI)
    {
        this.drawingAPI = drawingAPI;
    }

    public abstract void Draw();
}
```
- **Purpose**: Abstract class for shapes.
- **Details**: Holds a reference to the `IDrawingAPI`.

#### `Circle.cs` and `Rectangle.cs`
```csharp
public class Circle : Shape
{
    private double x, y, radius;

    public Circle(double x, double y, double radius, IDrawingAPI drawingAPI) : base(drawingAPI)
    {
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

    public override void Draw()
    {
        drawingAPI.DrawCircle(x, y, radius);
    }
}

// Similar implementation for Rectangle
```
- **Purpose**: Concrete shapes using the drawing API.
- **Details**: Each shape uses the `IDrawingAPI` to render itself.

#### `Program.cs`
```csharp
class Program
{
    static void Main(string[] args)
    {
        Shape[] shapes = new Shape[2];
        shapes[0] = new Circle(1, 2, 3, new DrawingAPI1());
        shapes[1] = new Rectangle(5, 7, 10, 5, new DrawingAPI2());

        foreach (var shape in shapes)
        {
            shape.Draw();
        }
    }
}
```
- **Purpose**: Demonstrates the Bridge pattern with different shapes and rendering APIs.
- **Expected Output**: 
  ```
  API1 drawing a circle at (1,2) with radius 3
  API2 drawing a rectangle at (5,7) with width 10 and height 5
  ```

### Order of Creation

1. **Create `IDrawingAPI` Interface** - The core of the implementation side.
2. **Implement `DrawingAPI1` and `DrawingAPI2`** - Different rendering mechanisms.
3. **Create Abstract `Shape` Class** - The abstraction which uses `IDrawingAPI`.
4. **Implement `Circle` and `Rectangle`** - Concrete shapes using the drawing APIs.
5. **Implement `Program.cs`** - To demonstrate the usage.

This approach encapsulates the rendering mechanism and the shape representation separately, allowing for greater flexibility and easier maintenance.
