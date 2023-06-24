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
 public Shape createShape(String shapeType) {
    if (shapeType.equalsIgnoreCase("circle")) {
        return new Circle();
    } else if (shapeType.equalsIgnoreCase("rectangle")) {
        return new Rectangle();
    } else {
        return null; // Handle unsupported shape types
    }
}
```



[page 6](./page06.md)
