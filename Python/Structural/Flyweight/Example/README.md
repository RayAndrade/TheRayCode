[up](../README.md) [script](script/page01.md)

The Flyweight design pattern is a structural pattern used in software development to minimize memory usage or computational expenses by sharing as much as possible with similar objects. It's particularly useful in situations where the number of objects with similar states is high.

For a Java implementation using the Flyweight pattern, let's consider an example where we create shapes in a graphical application, such as circles with different colors. In this scenario, the color property can be shared among multiple circles to save memory.

Here's how you can structure your project:

1. **Color.java**: This class represents the Flyweight in our example. It encapsulates the intrinsic state, which is shared across multiple objects. In our case, this would be the color.

2. **Shape.java**: This is an interface that our concrete Flyweight will implement. This could represent different shapes, but for simplicity, let's assume we're only dealing with circles.

3. **Circle.java**: Implements the Shape interface and represents a concrete Flyweight. This class will use the Color object to set its color.

4. **ShapeFactory.java**: This factory class is responsible for creating and managing the Flyweight objects (Color instances, in this case). It ensures that identical objects are shared and not recreated.

5. **Main.java**: This is the client code that uses the Flyweight objects. It will create several circles with different or same colors and demonstrate the Flyweight pattern in action.

Let's dive into the code for each:

### Color.java

```java
public class Color {
    private final String color;

    public Color(String color) {
        this.color = color;
    }

    public String getColor() {
        return color;
    }
}
```

### Shape.java

```java
public interface Shape {
    void draw();
}
```

### Circle.java

```java
public class Circle implements Shape {
    private Color color; // Intrinsic state shared
    private int x, y;    // Extrinsic state unique to each circle

    public Circle(Color color) {
        this.color = color;
    }

    public void setX(int x) {
        this.x = x;
    }

    public void setY(int y) {
        this.y = y;
    }

    public void draw() {
        System.out.println("Drawing a " + color.getColor() + " circle at (" + x + "," + y + ")");
    }
}
```

### ShapeFactory.java

```java
import java.util.HashMap;
import java.util.Map;

public class ShapeFactory {
    private static final Map<String, Color> colorMap = new HashMap<>();

    public static Color getColor(String color) {
        colorMap.putIfAbsent(color, new Color(color));
        return colorMap.get(color);
    }
}

```

### Main.java

```java
public class Main {
    public static void main(String[] args) {
        Circle circle1 = new Circle(ShapeFactory.getColor("Red"));
        circle1.setX(10);
        circle1.setY(20);
        circle1.draw();

        Circle circle2 = new Circle(ShapeFactory.getColor("Blue"));
        circle2.setX(20);
        circle2.setY(30);
        circle2.draw();

        Circle circle3 = new Circle(ShapeFactory.getColor("Red"));
        circle3.setX(30);
        circle3.setY(40);
        circle3.draw();
    }
}
```

### Expected Output in Terminal

When you run the `Main.java`, the output should be something like this, showing that circles are being drawn with specified colors and positions:

```
Drawing a Red circle at (10,20)
Drawing a Blue circle at (20,30)
Drawing a Red circle at (30,40)
```

### Creation Order in the Project

1. **Color.java**: Define the intrinsic state.
2. **Shape.java**: Define the shape interface.
3. **Circle.java**: Implement the concrete Flyweight.
4. **ShapeFactory.java**: Implement the factory to manage Flyweights.
5. **Main.java**: Demonstrate the usage of Flyweights.

This implementation demonstrates the Flyweight pattern in a simple context. The key point is the sharing of the Color objects between multiple Circle instances, which is the essence of the Flyweight pattern.
