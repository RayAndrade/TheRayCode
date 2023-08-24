[home](./page01.md)

[back](./page06.md)

In this example, ShapeFactory is a factory class that creates objects of different types. The getShape() method of the ShapeFactory class creates and returns shape objects based on the input it receives.

In main.cpp, the factory creates a Circle, Square, and Rectangle object. The draw() method is then called on each object, demonstrating polymorphism. The std::unique_ptr is used to handle the memory and automatically delete the objects when they are no longer needed.

Note: It is advisable to handle exceptions for invalid shape types in a production-level code, which is not included in this example for simplicity.

In summary, the Shape class provides a common interface for all derived shapes. The derived classes (Circle, Square, Rectangle) provide specific implementations for this interface. The ShapeFactory class is used to create objects of these types, abstracting away the details of object creation from the client code. The client code (in the main function) works with the abstract Shape interface, and is not concerned with the specific types of shapes that are being created and manipulated.


[page8](./page08.md)

