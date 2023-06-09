# [TheRayCode](../../../README.md) is AWESOME!!!


**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**The C# Creational Patterns:**

|Pattern|   |   |   |   |
|---|---|---|---|---|
| **Abstract Factory** | [**C++**](../../../CPP/Creational/AbstractFactory/README.md) | [**C#**](../../../Csharp/Creational/AbstractFactory/README.md) | [Java](../../../Java/Creational/AbstractFactory/README.md) | [PHP](../../../PHP/Creational/AbstractFactory/README.md) |

**C# Abstract Factory Design Pattern**

[script](./script/page01.md)

We start with the interface **IFactory**

```
public interface IFactory
{
    FactoryDataItem GetData(int type);
}
```
**IFactory** *Interface*:
It defines a method GetData that accepts an integer type and returns an instance of **FactoryDataItem**.

Then we crearte the **FactoryDataItem**

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
**FactoryDataItem Class**:
It's a class that encapsulates an object (data item). It contains a single field *_dataItem* and a property DataItem that returns this object.

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

**ShapeType Enum**:
It defines three constants: Circle, Square, and Rectangle, each associated with a specific integer value

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
**ShapeFactory Class**:
This class extends AbstractFactory and overrides the **GetData** method. It creates a new instance of **FactoryDataItem** depending on the **ShapeType** specified by the type parameter.

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
**Circle**, **Square**, and **Rectangle** *Classes*:
Each of these classes has a GetInfo method that prints a message to the console identifying the shape.

Now let's make a color factory we will start with creating the **ColorType** *enum*

```
public enum ColorType
{
    Red = 1,
    Green = 2,
    Blue = 3
}
```

**ColorType Enum**:
Similar to ShapeType, it defines three constants: Red, Green, and Blue, each associated with a specific integer value.

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

**Red**, **Green**, and **Blue** *Classes*:
These classes each have a GetInfo method that prints a message to the console identifying the color.

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
**ColorFactory** *Class*:
Similar to ShapeFactory, this class creates a new instance of FactoryDataItem depending on the ColorType specified by the type parameter.

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
**Program Class**:
This class has a **Main** method where ShapeFactory and ColorFactory are instantiated. Then it uses these factories to create a Circle and a Red color, and calls their GetInfo methods to print the shape and color to the console.

When we compile and run we get
```
This is a circle.
This is the red color.
```
This example of the Abstract Factory Pattern allows you to create families of related objects (in this case, shapes and colors) without specifying their concrete classes. The ShapeFactory and ColorFactory abstract the creation of shapes and colors, respectively. If you wanted to add a new shape or color, you'd only need to modify the relevant factory and add a new class for the shape or color, with no changes required in the Main method.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

