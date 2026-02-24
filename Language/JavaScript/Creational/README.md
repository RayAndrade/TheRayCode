# [TheRayCode](../../../README.md) is AWESOME!!!

[top](../README.md)


## 🎓 Introduction to the Gang of Four Design Patterns in JavaScript

The **Gang of Four (GoF)** book *“Design Patterns: Elements of Reusable Object-Oriented Software”* defines 23 classic software design patterns. These patterns offer proven solutions to common design challenges in object-oriented systems.

This repository demonstrates **all 23 GoF patterns implemented in JavaScript**, categorized into:

* Creational Patterns
* [Structural Patterns](../Structural/README.md)
* [Behavioral Patterns](../Behavioral/README.md)

Each pattern is implemented using modern JavaScript (`ES6+`) syntax and explained with detailed comments and examples.

---

## 🏗️ Creational Patterns

**Definition**: Creational patterns focus on the process of **object creation**. They abstract the instantiation process, making it more flexible and dynamic.

These patterns help manage complexity by **controlling which objects are created, when, and how**.

### 🔹 **[Abstract Factory](./AbstractFactory/README.md)**

> Provides an interface for creating **families of related objects** without specifying their concrete classes.

* Used when you need to enforce a set of related products (e.g., GUI kits for MacOS vs Windows).
* It encapsulates multiple factories.

### 🔹 **[Builder](./Builder/README.md)**

> Separates the construction of a complex object from its representation so the same construction process can create different representations.

* Great for objects that require multiple steps to build (e.g., building a Vacation or HTML document).
* Allows step-by-step creation of objects with optional parts.

### 🔹 **[Factory Method](./Factory/README.md)**

> Defines an interface for creating an object, but lets subclasses decide which class to instantiate.

* Useful when you don't know the exact type of object that will be needed until runtime.
* It delegates the instantiation to subclasses.

### 🔹 **[Prototype](./Prototype/README.md)**

> Specify the kinds of objects to create using a **prototypical instance**, and create new objects by cloning this prototype.

* Efficient when creating objects is expensive (e.g., deep copies).
* JavaScript’s native `Object.create()` reflects this pattern.

### 🔹 **[Singleton](./Singleton/README.md)**

> Ensures a class has only one instance and provides a global point of access to it.

* Controls access to shared resources (e.g., logging, configuration).
* Restricts instantiation to one object only.


[TheRayCode.ORG](https://www.TheRayCode.org) 

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com@TheRayCode/) | [X @TheRayCode](https://www.x.com@TheRayCode/) | [YouTube](https://www.youtube.com@TheRayCode/)


