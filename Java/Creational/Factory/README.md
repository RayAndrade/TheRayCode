# [TheRayCode](../../../README.md) is AWESOME!!!

**[Creational Patterns](../README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../../Behavioral/README.md)**

**Java Factory Design Pattern**

|Pattern|   |   |   |   |
|---|---|---|---|---|
|  [**Factory**](README.md) | [**C++**](../../../CPP/Creational/Factory/README.md) | [**C#**](../../../Csharp/Creational/Factory/README.md) | [PHP](../../../PHP/Creational/Factory/README.md) |

**Java Factory Design Pattern**

[Example](./script/page01.md)


In this example, we'll create a simple shape hierarchy consisting of a base `Shape` class and two derived classes: `Circle` and `Rectangle`. We'll use a `ShapeFactory` to create instances of the different shape objects. Here's the implementation:

**Shape.java:**

Description: This is an abstract class that serves as the base class for all shapes in our hierarchy.

Importance: The Shape class defines a common interface (draw method) that all shapes must implement. 
It provides a contract for shape objects to be drawable, ensuring consistency and polymorphic behavior across different shape types


```java
public abstract class Shape {
    public abstract void draw();
}
```

**Circle.java:**

Description: This class represents a circle and extends the Shape class.
Importance: The Circle class inherits the draw method from the Shape class and provides its own implementation specific to drawing a circle. It demonstrates how different shape classes can have their own unique behavior while adhering to the common Shape interface.

```java
public class Circle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a circle.");
    }
}
```

**Rectangle.java:**

Description: This class represents a rectangle and also extends the Shape class.

Importance: Similar to the Circle class, the Rectangle class inherits from Shape and provides its own implementation of the draw method, showcasing how different shapes can have different drawing behaviors.

```java
public class Rectangle extends Shape {
    @Override
    public void draw() {
        System.out.println("Drawing a rectangle.");
    }
}
```

**ShapeFactory.java:**

Description: This class is responsible for creating instances of different shape objects based on a given shape type.

Importance: The ShapeFactory encapsulates the object creation logic, acting as a central factory for creating shape objects. It abstracts away the creation details from the client code, providing a convenient and consistent way to create shapes. This promotes loose coupling and modular design, allowing easy addition of new shape types without modifying the client code.

```java
public class ShapeFactory {
    public Shape createShape(String shapeType) {
        if (shapeType.equalsIgnoreCase("circle")) {
            return new Circle();
        } else if (shapeType.equalsIgnoreCase("rectangle")) {
            return new Rectangle();
        } else {
            return null; // Handle unsupported shape types
        }
    }
}
```

Now, let's create a `Main` class with the `main` method to demonstrate the usage of the Factory Pattern:

**Main.java:**

Description: This class contains the main method and serves as the entry point for the program.

Importance: The Main class demonstrates the usage of the Factory Pattern by creating instances of shapes using the ShapeFactory. It showcases how the factory can create different shape objects based on the provided shape type, providing a flexible and extensible way to work with shape instances.
```java
public class Main {
    public static void main(String[] args) {
        ShapeFactory shapeFactory = new ShapeFactory();

        // Create shapes using the factory
        Shape circle = shapeFactory.createShape("circle");
        Shape rectangle = shapeFactory.createShape("rectangle");

        // Draw the shapes
        circle.draw();
        rectangle.draw();
    }
}
```

In the `Main` class, we first create an instance of the `ShapeFactory`. Then, we use the factory's `createShape` method to create instances of the `Circle` and `Rectangle` classes. Finally, we call the `draw` method on each shape to demonstrate their functionality.

You can compile and run the `Main` class to see the output:
```
Drawing a circle.
Drawing a rectangle.
```

This example showcases the Factory Pattern, where the `ShapeFactory` encapsulates the object creation logic, allowing the client code to create different shape objects without directly instantiating them.

Overall, each class plays a crucial role in implementing the Factory Pattern and building a shape hierarchy with a central factory for object creation. This design allows for code reusability, scalability, and easier maintenance as new shape types can be added by simply extending the base Shape class and updating the ShapeFactory.



[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)


