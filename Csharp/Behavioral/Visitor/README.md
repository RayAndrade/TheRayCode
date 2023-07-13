# TheRayCode is AWESOME!!!

**Visitior**

**[C#](../README.md)** 

**[Creational Patterns](../../Creational/README.md)** | **[Structural Patterns](../../Structural/README.md)** | **[Behavioral Patterns](../README.md)**

**C# Behavioral Patterns**

* **[ChainOfResponsibility](../ChainOfResponsibility/README.md)**
* **[Iterator](../Iterator/README.md)**
* **[Mediator](../Mediator/README.md)**
* **[Memento](../Memento/README.md)**
* **[Observer](../Observer/README.md)**
* **[State](../State/README.md)**
* **[Strategy](../Strategy/README.md)**
* **[Template](../Template/README.md)**
* **[Visitor](./README.md)**

**C# Visitior Design Pattern**

[Example 1](./V1/README.md)

Here's a demonstration of the visitor pattern using a Monster theme. 
Each class will have its own .cs file.

**IMonster.cs**

The **Visitor** design pattern is a behavioral design pattern that allows you to add new behaviors to existing class hierarchies without altering any existing code. 
It lets you perform operations on elements of different types grouped in a collection.

Imagine you're working on a computer system representation. 
You have classes for various components like Keyboard, Monitor, Mouse, etc., each with its own set of properties and methods.
Now, if you want to add a functionality that is not inherently a part of these classes but involves them, like an operation that reports hardware health, you'd typically need to modify each of these classes. 
Doing so would violate the Open/Closed Principle, which states that classes should be open for extension but closed for modification.

This is where the Visitor pattern comes into play. 
Instead of adding the new functionality to the existing classes, you can create a separate Visitor class that contains this new operation. 
Each of your component classes needs to have an 'Accept' method that takes a Visitor as an argument. 
When you want to perform the operation, you call the 'Accept' method on each component, passing in the Visitor. 
The Visitor now 'visits' each component and can perform operations on it.

This pattern shines especially when working with complex object structures, such as an object-oriented representation of a Document Object Model (DOM) or an Abstract Syntax Tree (AST). 
It provides a way to traverse these structures and apply operations to their elements without modifying their source code.

However, there's a trade-off. 
The Visitor pattern can make your code more complex and harder to understand, especially for developers who aren't familiar with it. Furthermore, it's not easy to add new Element classes (in our example, new types of computer components), because you'll likely have to update all existing visitor interfaces and implementations.

In summary, Visitor is a powerful tool for managing complexity in specific scenarios, but like all tools, it should be used wisely and in appropriate situations.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/AndradeRay/)


