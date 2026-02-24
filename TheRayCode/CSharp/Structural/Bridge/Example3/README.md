[up](../README.md)

Creating a C# example for the Bridge design pattern in the context of shapes like Circle and Rectangle involves several steps. Let's break it down:

### Explanation of the Bridge Pattern
The Bridge pattern is a structural design pattern that separates the abstraction from its implementation so that the two can vary independently. This pattern involves an interface which acts as a bridge between the abstraction and implementation classes.

### Structure for Bridge Pattern with Circle and Rectangle
1. **Implementor Interface (IDrawAPI.cs):**
   - This interface defines the implementation interface for drawing operations.
   - Methods: `DrawCircle`, `DrawRectangle`

2. **Concrete Implementors (RedDrawAPI.cs, BlueDrawAPI.cs):**
   - These classes implement the `IDrawAPI` interface, providing specific implementations for the drawing methods.

3. **Abstraction (Shape.cs):**
   - This class maintains a reference to the `IDrawAPI` implementor.
   - Methods: Constructor, `Draw`

4. **Refined Abstraction (Circle.cs, Rectangle.cs):**
   - These classes extend the `Shape` class and provide specific implementations for drawing themselves using the `IDrawAPI`.

5. **Client Code (Program.cs):**
   - This file contains the main method to demonstrate the usage of the pattern.

### Example Code

#### 1. IDrawAPI.cs
```csharp
public interface IDrawAPI
{
    void DrawCircle(int radius, int x, int y);
    void DrawRectangle(int width, int height, int x, int y);
}
```

#### 2. RedDrawAPI.cs
```csharp
public class RedDrawAPI : IDrawAPI
{
    public void DrawCircle(int radius, int x, int y)
    {
        Console.WriteLine($"Drawing Circle[Color: red, radius: {radius}, x: {x}, y: {y}]");
    }

    public void DrawRectangle(int width, int height, int x, int y)
    {
        Console.WriteLine($"Drawing Rectangle[Color: red, width: {width}, height: {height}, x: {x}, y: {y}]");
    }
}
```

#### 3. BlueDrawAPI.cs
```csharp
public class BlueDrawAPI : IDrawAPI
{
    public void DrawCircle(int radius, int x, int y)
    {
        Console.WriteLine($"Drawing Circle[Color: blue, radius: {radius}, x: {x}, y: {y}]");
    }

    public void DrawRectangle(int width, int height, int x, int y)
    {
        Console.WriteLine($"Drawing Rectangle[Color: blue, width: {width}, height: {height}, x: {x}, y: {y}]");
    }
}
```

#### 4. Shape.cs
```csharp
public abstract class Shape
{
    protected IDrawAPI drawAPI;

    protected Shape(IDrawAPI drawAPI)
    {
        this.drawAPI = drawAPI;
    }

    public abstract void Draw();
}
```

#### 5. Circle.cs
```csharp
public class Circle : Shape
{
    private int x, y, radius;

    public Circle(int x, int y, int radius, IDrawAPI drawAPI) : base(drawAPI)
    {
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

    public override void Draw()
    {
        drawAPI.DrawCircle(radius, x, y);
    }
}
```

#### 6. Rectangle.cs
```csharp
public class Rectangle : Shape
{
    private int width, height, x, y;

    public Rectangle(int width, int height, int x, int y, IDrawAPI drawAPI) : base(drawAPI)
    {
        this.width = width;
        this.height = height;
        this.x = x;
        this.y = y;
    }

    public override void Draw()
    {
        drawAPI.DrawRectangle(width, height, x, y);
    }
}
```

#### 7. Program.cs
```csharp
class Program
{
    static void Main(string[] args)
    {
        Shape redCircle = new Circle(100, 100, 10, new RedDrawAPI());
        Shape blueRectangle = new Rectangle(50, 60, 10, 20, new BlueDrawAPI());

        redCircle.Draw();
        blueRectangle.Draw();
    }
}
```

### Order of Creation
1. Create `IDrawAPI` interface.
2. Implement `RedDrawAPI` and `BlueDrawAPI`.
3. Define the abstract `Shape` class.
4. Create `Circle` and `Rectangle` classes.
5. Demonstrate in `Program.cs`.

### Expected Output When Running the Program
```
Drawing Circle[Color: red, radius: 10, x: 100, y: 100]
Drawing Rectangle[Color: blue, width: 50, height: 60,

 x: 10, y: 20]
```

Each class and method is designed to clearly demonstrate the Bridge pattern, allowing for the abstraction (Shape) to be separated from its implementation (IDrawAPI), and enabling the flexibility to combine different shapes with different drawing APIs.
