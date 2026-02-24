# TheRayCode is AWESOME!!!

[top](../README.md)


|**[Creational Patterns](./Creational/README.md)** | **[Structural Patterns](./Structural/README.md)** | **[Behavioral Patterns](./Behavioral/README.md)** |
|---|---|---|
|**[C++](../CPP/Creational/README.md)** | **[C++](../CPP/Structural/README.md)** | **[C++](../CPP/Behavioral/README.md)** |
|**[C#](../Csharp/Creational/README.md)** | **[C#](../Csharp/Structural/README.md)** | **[C#](../Csharp/Behavioral/README.md)** |
|**[Java](../Java/Creational/README.md)** | **[Java](../Java/Structural/README.md)** | **[Java](../Java/Behavioral/README.md)** |
|**[PHP](../PHP/Creational/README.md)** | **[PHP](../PHP/Structural/README.md)** | **[PHP](../PHP/Behavioral/README.md)** |

**[JavaScript](../README.md)** 

| Creational Patterns | Structural Patterns | Behavioral Patterns |
|--------------|-----|-----------|
| [**AbstractFactory**](Creational/AbstractFactory/README.md) | [**Adapter**](./Structural/Adapter/README.md)         | [**Chain Of Responsibility**](./Behavioral/ChainOfResponsibility/README.md) |
| [**Builder**](./Creational/Builder/README.md)                 | [**Bridge**](./Structural/Bridge/README.md)           | [**Command**](./Behavioral/Command/README.md) |
| [**Factory**](./Creational/Factory/README.md)                 | [**Composite**](./Structural/Composite/README.md)     | [**Interpreter**](./Behavioral/Interpreter/README.md) |
| [**Prototype**](./Creational/Prototype/README.md)             | [**Decorator**](./Structural/Decorator/README.md)     | [**Iterator**](./Behavioral/Iterator/README.md) |
| [**Singleton**](./Creational/Singleton/README.md)             | [**Facade**](./Structural/Facade/README.md)           | [**Mediator**](./Behavioral/Mediator/README.md) |
|                                                               | [**+Flyweight**](./Structural/Flyweight/README.md)     | [**Memento**](./Behavioral/Memento/README.md)  |
|                                                               | [**Proxy**](./Structural/Proxy/README.md)             | [**Observer**](./Behavioral/Observer/README.md) |
|                                                               |                                                       | [**State**](./Behavioral/State/README.md)  |
|                                                               |                                                       | [**Strategy**](./Behavioral/Strategy/README.md)  |
|                                                               |                                                       | [**Template**](./Behavioral/Template/README.md) |
|                                                               |                                                       | [**Visitor**](./Behavioral/Visitor/README.md) |


**JavaScript section**

 * **[Creational](./Creational/README.md)**
 * **[Structural](./Structural/README.md)**
 * **[Behavioral](./Behavioral/README.md)**

**[C++](../CPP/README.md)** | **[C#](../Csharp/README.md)** | **[Java](../Java/README.md)**  | **[PHP](../PHP/README.md)** | **[JavaScript](../JavaScript/README.md)**



## 🎓 Introduction to the Gang of Four Design Patterns in JavaScript

The **Gang of Four (GoF)** book *“Design Patterns: Elements of Reusable Object-Oriented Software”* defines 23 classic software design patterns. These patterns offer proven solutions to common design challenges in object-oriented systems.

This repository demonstrates **all 23 GoF patterns implemented in JavaScript**, categorized into:

* [Creational Patterns](./Creational/README.md)
* [Structural Patterns](./Structural/README.md)
* [Behavioral Patterns](./Behavioral/README.md)

Each pattern is implemented using modern JavaScript (`ES6+`) syntax and explained with detailed comments and examples.

---


## 🏗️ [**Creational Patterns**](./Creational/README.md)

**Definition**: Creational patterns focus on the process of **object creation**. They abstract the instantiation process, making it more flexible and dynamic.

These patterns help manage complexity by **controlling which objects are created, when, and how**.

### 🔹 **[Abstract Factory](./Creational/AbstractFactory/README.md)**

> Provides an interface for creating **families of related objects** without specifying their concrete classes.

* Used when you need to enforce a set of related products (e.g., GUI kits for MacOS vs Windows).
* It encapsulates multiple factories.

### 🔹 **[Builder](./Creational/Builder/README.md)**

> Separates the construction of a complex object from its representation so the same construction process can create different representations.

* Great for objects that require multiple steps to build (e.g., building a Vacation or HTML document).
* Allows step-by-step creation of objects with optional parts.

### 🔹 **[Factory Method](./Creational/Factory/README.md)**

> Defines an interface for creating an object, but lets subclasses decide which class to instantiate.

* Useful when you don't know the exact type of object that will be needed until runtime.
* It delegates the instantiation to subclasses.

### 🔹 **[Prototype](./Creational/Prototype/README.md)**

> Specify the kinds of objects to create using a **prototypical instance**, and create new objects by cloning this prototype.

* Efficient when creating objects is expensive (e.g., deep copies).
* JavaScript’s native `Object.create()` reflects this pattern.

### 🔹 **[Singleton](./Creational/Singleton/README.md)**

> Ensures a class has only one instance and provides a global point of access to it.

* Controls access to shared resources (e.g., logging, configuration).
* Restricts instantiation to one object only.

---

## 🧱 Structural Patterns

**Definition**: Structural patterns focus on **object composition**. They define ways to compose objects to form larger structures while keeping them flexible and efficient.

These patterns are about **how classes and objects are composed** to build complex but maintainable systems.

### 🔸 **[Adapter](./Structural/Adapter/README.md)**

> Converts the interface of a class into another interface the client expects.

* Used when integrating incompatible interfaces (e.g., wrapping legacy APIs).
* Also known as a **wrapper**.

### 🔸 **[Bridge](./Structural/Adapter/README.md)**

> Decouples an abstraction from its implementation so the two can vary independently.

* Separates high-level logic from platform-specific code.
* Useful in UI frameworks where abstraction (e.g., Shape) and implementation (e.g., SVG, Canvas) are separated.

### 🔸 **[Composite](./Structural/Composite/README.md)**

> Composes objects into tree structures to represent part-whole hierarchies.

* Treats individual objects and compositions uniformly.
* Ideal for recursive structures like menus or file systems.

### 🔸 **[Decorator](./Structural/Adapter/README.md)**

> Attaches additional responsibilities to an object dynamically.

* An alternative to subclassing for extending functionality.
* Enables flexible feature addition without altering code.

### 🔸 **[Facade](./Structural/Facade/README.md)**

> Provides a unified interface to a set of interfaces in a subsystem.

* Simplifies complex APIs (e.g., hiding multiple subsystems behind one simple interface).
* Useful when clients need a simple entry point.

### 🔸 **[Flyweight](./Structural/Flyweight/README.md)**

> Reduces memory usage by sharing as much data as possible with similar objects.

* Used when many small objects share common data (e.g., game tiles, characters).
* Separates intrinsic from extrinsic data.

### 🔸 **[Proxy](./Structural/Proxy/README.md)**

> Provides a surrogate or placeholder for another object to control access to it.

* Can control access, cache results, or delay instantiation (lazy initialization, virtual proxy, etc.).
* Acts as a gatekeeper to the real object.

---

## 🧠 [**Behavioral Patterns**](./Behavioral/README.md)

**Definition**: Behavioral patterns are concerned with **how objects interact and communicate** with each other.

They help make complex workflows and interactions **more manageable, maintainable, and decoupled**.

### 🔸 [**Chain of Responsibility**](./Behavioral/ChainOfResponsibility/README.md)

> Passes a request along a chain of handlers until one handles it.

* Decouples sender from receiver.
* Used in logging frameworks, middleware chains.

### 🔸 [**Command**](./Behavioral/Command/README.md)

> Encapsulates a request as an object, allowing parameterization, queuing, and undoable operations.

* Ideal for implementing action queues or undo/redo.
* Separates command execution from the object that invokes it.

### 🔸 [**Interpreter**](./Behavioral/Interpreter/README.md)

> Defines a grammar and interprets sentences in the language.

* Used to interpret custom DSLs (e.g., regex, SQL).
* Each rule is represented as a class in the tree.

### 🔸 [**Iterator**](./Behavioral/Iterator/README.md)

> Provides a way to access elements of an aggregate sequentially without exposing its underlying representation.

* Common in collections and custom data structures.
* Helps separate traversal logic from container logic.

### 🔸 [**Mediator**](./Behavioral/Mediator/README.md)

> Defines an object that centralizes communication between a set of objects.

* Reduces direct dependencies between objects.
* Useful in UI frameworks to decouple widgets.

### 🔸 [**Memento**](./Behavioral/Memento/README.md)

> Captures and restores an object's internal state without violating encapsulation.

* Used in undo features (e.g., editor history).
* Stores snapshots of state.

### 🔸 [**Observer**](./Behavioral/Observer/README.md)

> Defines a one-to-many dependency so when one object changes state, all its dependents are notified.

* Found in event systems, pub/sub models.
* Decouples publisher from subscriber.

### 🔸 [**State**](./Behavioral/State/README.md)

> Allows an object to alter its behavior when its internal state changes.

* Behaves like a finite state machine.
* Each state is encapsulated in a class.

### 🔸 [**Strategy**](./Behavioral/Strategy/README.md)

> Defines a family of algorithms, encapsulates each one, and makes them interchangeable.

* Replaces conditional statements with polymorphism.
* Good for sorting, filtering, or pricing strategies.

### 🔸 [**Template**](./Behavioral/Template/README.md)

> Defines the skeleton of an algorithm, deferring some steps to subclasses.

* Promotes code reuse.
* Subclasses override only specific steps.

### 🔸 [**Visitor**](./Behavioral/Visitor/README.md)

> Lets you define new operations on objects without changing their classes.

* Adds functionality to object structures like trees.
* Good for applying operations to elements in a hierarchy.

---

## 📚 Summary

| Category   | Patterns                                                                                                                        |
| ---------- | ------------------------------------------------------------------------------------------------------------------------------- |
| Creational | Abstract Factory, Builder, Factory Method, Prototype, Singleton                                                                 |
| Structural | Adapter, Bridge, Composite, Decorator, Facade, Flyweight, Proxy                                                                 |
| Behavioral | Chain of Responsibility, Command, Interpreter, Iterator, Mediator, Memento, Observer, State, Strategy, Template Method, Visitor |

This repository provides examples for each of these patterns using **modern JavaScript modules**, with each pattern placed in its own folder. Each folder contains:



[TheRayCode.ORG](https://www.TheRayCode.ORG)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)

