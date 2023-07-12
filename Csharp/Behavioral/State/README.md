# TheRayCode is AWESOME!!!

**State**

**[C#](../README.md)** 

**[Creational Patterns](../Creational/README.md)** | **[Structural Patterns](../Structural/README.md)** | **[Behavioral Patterns](../README.md)**

**C# Behavioral Patterns**

* **[ChainOfResponsibility](../ChainOfResponsibility/README.md)**
* **[Iterator](../Iterator/README.md)**
* **[Mediator](../Mediator/README.md)**
* **[Memento](../Memento/README.md)**
* **[Observer](../Observer/README.md)**
* **[State](./README.md)**
* **[Strategy](../Strategy/README.md)**
* **[Template](../Template/README.md)**
* **[Visitor](../Visitor/README.md)**

**C# State Design Pattern**

[taarget](./Show/README.md)

[Example 1](./SE1/README.md)

The **State** design pattern is a *behavioral* design pattern, which means it's primarily concerned with the communication between objects and how they change over time. 
In the context of the **State** pattern, it's all about allowing an object to modify its behavior when its internal state changes, without using intricate conditional statements.

Here's an analogy that might help: imagine you are a vending machine.
The State design pattern is like the different modes you can be in, based on what's happening. 
If someone has just inserted a coin, you're in "Accepting Selection" mode. If they've made a selection and you're dispensing the product, you're in "Dispensing" mode. 
If no one has inserted a coin yet, you might be in "Idle" mode. Each of these modes corresponds to a different set of behaviors or actions you can take.

In the context of an object in a program, these "modes" are different states the object can be in, and the behaviors are what methods the object will execute.

When we use the State design pattern, instead of using complex conditional statements within our methods to determine behavior based on the object's current state, we encapsulate the state-specific behaviors within different state classes. 
These state classes all follow the same interface, so they have the same set of methods, but they implement them differently based on what's appropriate for that state.

The object whose behavior is changing, often called the context object, maintains a reference to one of these state classes, which represents its current state. When a method is called on the context object, it delegates that call to the corresponding method in its current state object. 
To change the object's behavior, we simply switch out the current state object for a different one.

The benefit of the State design pattern is that it makes it much easier to manage an object with many possible states and behaviors. 
Each state and its associated behavior is isolated to its own class, following the principle of Single Responsibility, which makes the code easier to understand, maintain, and extend. 
Adding new states or changing behavior involves adding or modifying isolated state classes, rather than changing a complex network of conditional statements. 
This is a powerful tool when dealing with complex systems that are subject to change.

[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
