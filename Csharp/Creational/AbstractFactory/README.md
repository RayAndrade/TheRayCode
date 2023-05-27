# [TheRayCode](../../../README.md) is AWESOME!!!


**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**The C# Creational Patterns:**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| Abstract Factory | [**C++**](../../../CPP/Creational/AbstractFactory/README.md) | [**C#**](../../../Csharp/Creational/AbstractFactory/README.md) | [Java](../../../Java/Creational/AbstractFactory/README.md) | [PHP](../../../PHP/Creational/AbstractFactory/README.md) |
| Builder| [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |
| Factory | [**C++**](../../../CPP/Creational/Builder/README.md) | [**C#**](../../../Csharp/Creational/Builder/README.md) | [Java](../../../Java/Creational/Builder/README.md) | [PHP](../../../PHP/Creational/Builder/README.md) |
| Prototype | [**C++**](../../../CPP/Creational/Prototype/README.md) | [**C#**](../../../Csharp/Creational/Prototype/README.md) | [Java](../../../Java/Creational/Prototype/README.md) | [PHP](../../../PHP/Creational/Prototype/README.md) |
| Singleton | [**C++**](../../../CPP/Creational/Singleton/README.md) | [**C#**](../../../Csharp/Creational/Singleton/README.md) | [Java](../../../Java/Creational/Singleton/README.md) | [PHP](../../../PHP/Creational/Singleton/README.md) |

[script](./script/page01.md)

We start with the interface **IFactory**

```
public interface IFactory
{
    FactoryDataItem GetData(int type);
}
```

The we crearte the **FactoryDataItem**

```
public class FactoryDataItem
{
    public FactoryDataItem(object dataItem)
     {
        _dataItem = dataItem;
    }
    private object _dataItem;
    public object DataItem
    {
        get { return _dataItem; }
    }
}
```
Let's now create the *abstract* class **AbstractFactory**

```
abstract class AbstractFactory: IFactory
{
    public abstract FactoryDataItem GetData(int type);
}
```

let's create an enum object **ShapeType**

```
enum ShapeType
{
    Circle = 1,
    Square = 2,
    Rectangle = 3
}
```    

We create a **ShapeFactory** which is of **AbstractFactory** type

```
class ShapeFactory: AbstractFactory
{
    public override FactoryDataItem GetData(int type)
    {
        FactoryDataItem factoryDataItem = null;
        switch ((ShapeType)type)
        {
            case ShapeType.Circle:
                factoryDataItem = new FactoryDataItem(new Circle());
                break;
            case ShapeType.Square:
                factoryDataItem = new FactoryDataItem(new Square());
                break;
            case ShapeType.Rectangle:
                factoryDataItem = new FactoryDataItem(new Rectangle());
                break;
        }
            
        return factoryDataItem;
    }
}
```
Let crate each one of there objects,

For **Circle**

```
using System;

class Circle
{
    public void GetInfo()
    {
        Console.WriteLine("This is a circle.");
    }
}
```
For **Square**

```
using System;

class Square
{
    public void GetInfo()
    {
        Console.WriteLine("This is a square.");
    }
}
```

And for **Rectangle**

```
class Rectangle
{
    public void GetInfo()
    {
        Console.WriteLine("This is a rectangle.");
    }
}
```
Now let's make a color factory we will start with creating the **ColorType** *enum*

```
public enum ColorType
{
    Red = 1,
    Green = 2,
    Blue = 3
}
```

Now lets make our color classes

for **Red**

```
class Red
{
   public void GetInfo()
   {
        Console.WriteLine("This is the red color.");
    }  
}
```
 for **Blue**
 
```
 class Blue
{
    public void GetInfo()
    {
        Console.WriteLine("This is the blue color.");
    }
}
```
And now we will create the **Green** class

```
class Green
{
    public void GetInfo()
    {
        Console.WriteLine("This is the green color.");
    }
}
```
let's create the **ColorFactory**

```
public class ColorFactory
{
    public FactoryDataItem GetData(int type)
    {
        FactoryDataItem factoryDataItem = null;
        switch ((ColorType)type)
        {
            case ColorType.Red:
                factoryDataItem = new FactoryDataItem(new Red());
                break;
            case ColorType.Blue:
                factoryDataItem = new FactoryDataItem(new Blue());
                break;
            case ColorType.Green:
                factoryDataItem = new FactoryDataItem(new Green());
                break;
        }
        return factoryDataItem;
    }
}
```
let's now buid the demo

```
internal class Program
{
    public static void Main(string[] args)
    {
        ShapeFactory shapeFactory = new ShapeFactory();
        ColorFactory colorFactory = new ColorFactory();
            
        Circle circle = shapeFactory.GetData((int)ShapeType.Circle).DataItem as Circle;
        circle.GetInfo();
           
        Red red = colorFactory.GetData((int)ColorType.Red).DataItem as Red;
        red.GetInfo();
    }
}
```
When we compile and run we get
```
This is a circle.
This is the red color.
```

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

