# TheRayCode is AWESOME!!!

**Behavoiral Patterns section**

**[Top](../README.md)** 

**[Creational Patterns](../Creational/README.md)** * **[Structural Patterns](../Structural/README.md)** * **[Behavioral Patterns](../Behavioral/README.md)**


## 🎓 Introduction to the Gang of Four Design Patterns in JavaScript

The **Gang of Four (GoF)** book *“Design Patterns: Elements of Reusable Object-Oriented Software”* defines 23 classic software design patterns. These patterns offer proven solutions to common design challenges in object-oriented systems.

This repository demonstrates **all 23 GoF patterns implemented in JavaScript**, categorized into:

* [Creational Patterns](../Creational/README.md)
* [Structural Patterns](../Structural/README.md)
* [Behavioral Patterns](../Behavioral/README.md)

Each pattern is implemented using modern JavaScript (`ES6+`) syntax and explained with detailed comments and examples.

**JavaScript Behavoiral Patterns**

* **[ChainOfResponsibility](./ChainOfResponsibility/README.md)**
* **[Command](./Command/README.md)**
* **[Iterator](./Iterator/README.md)**
* **[Mediator](./Mediator/README.md)**
* **[Memento](./Memento/README.md)**
* **[Observer](./Observer/README.md)**
* **[State](./State/README.md)**
* **[Strategy](./Strategy/README.md)**
* **[Template](./Template/README.md)**
* **[Visitor](./Visitor/README.md)**

## 🧠 [Behavioral Patterns](../Behavioral/README.md)

**Definition**: Behavioral patterns are concerned with **how objects interact and communicate** with each other.

They help make complex workflows and interactions **more manageable, maintainable, and decoupled**.

### 🔸 **[Chain of Responsibility](./ChainOfResponsibility/README.md)**

> Passes a request along a chain of handlers until one handles it.

* Decouples sender from receiver.
* Used in logging frameworks, middleware chains.

### 🔸 **[Command](./Command/README.md)**

> Encapsulates a request as an object, allowing parameterization, queuing, and undoable operations.

* Ideal for implementing action queues or undo/redo.
* Separates command execution from the object that invokes it.

### 🔸 **[Interpreter](./Interpreter/README.md)**

> Defines a grammar and interprets sentences in the language.

* Used to interpret custom DSLs (e.g., regex, SQL).
* Each rule is represented as a class in the tree.

### 🔸 **[Iterator](./Iterator/README.md)**

> Provides a way to access elements of an aggregate sequentially without exposing its underlying representation.

* Common in collections and custom data structures.
* Helps separate traversal logic from container logic.

### 🔸 **[Mediator](./Mediator/README.md)**

> Defines an object that centralizes communication between a set of objects.

* Reduces direct dependencies between objects.
* Useful in UI frameworks to decouple widgets.

### 🔸 **[Memento](./Memento/README.md)**

> Captures and restores an object's internal state without violating encapsulation.

* Used in undo features (e.g., editor history).
* Stores snapshots of state.

### 🔸 **[Observer](./Observer/README.md)**

> Defines a one-to-many dependency so when one object changes state, all its dependents are notified.

* Found in event systems, pub/sub models.
* Decouples publisher from subscriber.

### 🔸 **[State](./State/README.md)**

> Allows an object to alter its behavior when its internal state changes.

* Behaves like a finite state machine.
* Each state is encapsulated in a class.

### 🔸 **[Strategy](./Strategy/README.md)**

> Defines a family of algorithms, encapsulates each one, and makes them interchangeable.

* Replaces conditional statements with polymorphism.
* Good for sorting, filtering, or pricing strategies.

### 🔸 **[Template](./Template/README.md)**

> Defines the skeleton of an algorithm, deferring some steps to subclasses.

* Promotes code reuse.
* Subclasses override only specific steps.

### 🔸 **[Visitor](./Visitor/README.md)**

> Lets you define new operations on objects without changing their classes.

* Adds functionality to object structures like trees.
* Good for applying operations to elements in a hierarchy.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [X @TheRayCode](https://www.x.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
