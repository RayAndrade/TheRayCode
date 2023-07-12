# TheRayCode is AWESOME!!!

**Statergy**

**[C#](../README.md)** 

**[Creational Patterns](../Creational/README.md)** * **[Structural Patterns](../Structural/README.md)** * **[Behavioral Patterns](../README.md)**

**C# Behavioral Patterns**

* **[ChainOfResponsibility](../ChainOfResponsibility/README.md)**
* **[Iterator](../Iterator/README.md)**
* **[Mediator](../Mediator/README.md)**
* **[Memento](../Memento/README.md)**
* **[Observer](../Observer/README.md)**
* **[State](../State/README.md)**
* **[Strategy](./README.md)**
* **[Template](../Template/README.md)**
* **[Visitor](../Visitor/README.md)**

**C# Statergy Design Pattern**

[Example](./Show/README.md)

[Example 1](./SY1/README.md)

The **State** Design Pattern is a behavioral design pattern in object-oriented programming that allows an object to change its behavior when its internal state changes. 
It's like the object changes its class. It encapsulates variable behavior for the same routine based on object state. 
This can be a cleaner way for an object to change its behavior at runtime without resorting to large monolithic conditional statements.

Imagine you're designing a media player app. In its lifecycle, the media player can be in different states: Playing, Paused, Stopped, etc. 
Each state has different behaviors: when in the "Playing" state, a "Play" button might pause the playback, while in the "Stopped" state, the same button might start the playback from the beginning.

In traditional procedural code, the logic for each state's behavior would typically be placed in switch-case statements within the methods of the player. If you want to add a new state, you have to modify the existing method, which breaks the Open-Closed Principle (OCP). Furthermore, the method itself may become excessively large and complicated, leading to readability and maintainability issues.

The **State** Design Pattern addresses these problems by encapsulating the state-specific behavior within separate state classes. 
Each state would have its own class that holds the behavior for that state. 
The context object (e.g., media player) would then delegate its behavior to the current state object.

When the context's internal state changes, it switches the state object it's delegating to, effectively changing the behavior that's executed when its methods are called. 
This way, adding a new state or changing the behavior of an existing state only requires modifications to the state class, without touching the context's code.

In summary, the State Design Pattern promotes code organization, separation of concerns, and increased maintainability by encapsulating the behavior of particular states within separate classes. 
This design pattern is beneficial in reducing complexity in code that is heavy on conditional complexity. 
However, it may be an overkill for simple state transitions and could introduce unnecessary complexity if not handled well.

[RayAndrade.COM](https://www.RayAndrade.com)

[TheRayCode.ORG](https://www.TheRayCode.org)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/TheRayCode/)
