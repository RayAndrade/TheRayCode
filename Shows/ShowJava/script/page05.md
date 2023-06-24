[home](./page01.md)

[back](./page04.md)

**ShapeFactory.java:**

The **ShapeFactory** encapsulates the object creation logic, acting as a central factory for creating shape objects. 

It abstracts away the creation details from the client code, providing a convenient and consistent way to create shapes. 

This promotes loose coupling and modular design, allowing easy addition of new shape types without modifying the client code.

Create class

```
ShapeFactory
```

add code

```
ShapeFactory shapeFactory = new ShapeFactory();

    // Create shapes using the factory
hape circle = shapeFactory.createShape("circle");
Shape rectangle = shapeFactory.createShape("rectangle");

    // Draw the shapes
circle.draw();
rectangle.draw();
```



[page 6](./page06.md)
