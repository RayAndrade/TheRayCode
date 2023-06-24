[home](./page01.md)

[back](./page05.md)

Let's go to the **main** method

The Main class demonstrates the usage of the **Factory Pattern** by creating instances of shapes using the **ShapeFactory**. 

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

[page 7](./page07.md)
