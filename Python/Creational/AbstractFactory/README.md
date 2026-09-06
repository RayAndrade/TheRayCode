# [TheRayCode](../../README.md) is AWESOME!!!

[top](../README.md)

**[Creational Patterns](../README.md)** | **[Structural Patterns](../Structural/README.md)** | **[Behavioral Patterns](../Behavioral/README.md)**

**Python Creational Patterns**

**[Example](./Example/README.md)**

## What is Abstract Factory (Python)

* Creates **families of related objects**
  → Groups related objects together so they are created and used consistently.

* Uses a **factory interface** instead of direct instantiation
  → Client requests objects through methods instead of calling constructors directly.

* Hides **concrete class names** from the client
  → Client never references specific classes, only abstract interfaces.

* Ensures **compatible objects are used together**
  → Factory guarantees that related objects work correctly as a set.

* Client calls: `factory.create_*()` methods
  → Object creation happens through factory methods, not direct instantiation.

* Built using `ABC` and `abstractmethod` in Python
  → Python uses abstract base classes to define required factory behavior.

---

## Why Study Abstract Factory (Python)

1.* Separates **object creation from usage**
  → Keeps creation logic independent from the code that uses objects.

2.* Reduces **tight coupling** in client code
  → Client depends on abstractions, not specific implementations.

3.* Makes code **easier to extend and modify**
  → New families can be added without changing existing client code.

4.* Allows **easy swapping of product families**
  → Switching factories changes behavior without rewriting the client.

5.* Organizes code into **clear, structured layers**
  → Separates products, factories, and client responsibilities cleanly.

6.* Reinforces **GoF design pattern principles across languages**
  → Builds transferable knowledge usable in C++, Java, PHP, and Python.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
