[home](./page01.md)

[back](./page05.md)

Let's go to the **main** method


The Main class demonstrates the usage of the **Factory Pattern** by creating instances of shapes using the **ShapeFactory**. 

It showcases how the factory can create different shape objects based on the provided shape type, providing a flexible and extensible way to work with shape instances.

```
ShapeFactory shapeFactory = new ShapeFactory();

        // Create shapes using the factory
Shape circle = shapeFactory.createShape("circle");
Shape rectangle = shapeFactory.createShape("rectangle");

        // Draw the shapes
circle.draw();
rectangle.draw();
```

[page 7](./page07.md)
