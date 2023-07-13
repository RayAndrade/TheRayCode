# TheRayCode is AWESOME!!!

**Template**

**[C#](../README.md)** 

**[Creational Patterns](../Creational/README.md)** | **[Structural Patterns](../Structural/README.md)** | **[Behavioral Patterns](../README.md)**

**C# Behavioral Patterns**

* **[ChainOfResponsibility](../ChainOfResponsibility/README.md)**
* **[Iterator](../Iterator/README.md)**
* **[Mediator](../Mediator/README.md)**
* **[Memento](../Memento/README.md)**
* **[Observer](../Observer/README.md)**
* **[State](../State/README.md)**
* **[Strategy](../Strategy/README.md)**
* **[Template](./README.md)**
* **[Visitor](../Visitor/README.md)**

[Example 1](./T1/README.md)

[Example](./Show/README.md)

**C# Template Design Pattern**

The **Template Method Design Pattern** is a behavioral design pattern that defines the skeleton of an algorithm in a base class but lets derived classes override specific steps of the algorithm without changing its overall structure. 

Think of it like baking different types of bread. 
The steps for baking bread (mixing ingredients, kneading the dough, allowing it to rise, baking, cooling) generally remain the same. 
However, the ingredients (what goes into the dough) might change depending on whether you're making whole grain bread, sourdough bread, or rye bread. 

In this scenario, the overall algorithm (baking bread) would be defined in a base class, often called an "abstract class" in languages like C#. 
This class would contain methods representing each step of the algorithm (mix ingredients, knead dough, let rise, bake, cool). 
The method for the algorithm itself, often referred to as the "template method," would call each of these steps in the correct order.

The methods representing the steps that are the same for every type of bread (like kneading the dough, allowing it to rise, baking, cooling) could be implemented directly in the base class. 
The steps that change depending on the type of bread (like what ingredients to mix) would be left as abstract methods, meaning the base class doesn't provide an implementation for them.

Derived classes, which represent specific types of bread (like whole grain bread, sourdough bread, rye bread), would then provide their own implementation for these abstract methods (meaning, specify their own ingredients). 
The base class's template method can be called on any instance of these derived classes, and it will execute the algorithm using both the base class's and the derived class's methods.

This design pattern is beneficial as it provides a way to reuse code, avoid duplication, and follow the "Don't Repeat Yourself" (DRY) principle. 
It also provides a convenient way to hook into existing functionality of an algorithm by allowing us to extend certain parts of it where necessary. 
It's typically used in frameworks, where each framework defines the skeleton of an algorithm, and users of the framework fill in the details with their specific implementation.


[TheRayCode.ORG](https://www.TheRayCode.org)

[RayAndrade.COM](https://www.RayAndrade.com)

[Facebook](https://www.facebook.com/TheRayCode/) | [Twitter @TheRayCode](https://www.twitter.com/TheRayCode/) | [YouTube](https://www.youtube.com/AndradeRay/)
