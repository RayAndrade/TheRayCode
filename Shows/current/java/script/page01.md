[home](./page01.md)

I will describe the utility of the Factory Design Pattern first, then explain how we can implement it with a "Dessert Factory" in Java. 

Each class will be defined separately, as you asked, and a demo will be presented in the main method file named Program.java.

The Factory Design Pattern is a creational design pattern that provides an interface for creating objects in a super class, but allows subclasses to alter the type of objects that will be created. 

The pattern suggests that you replace direct object construction calls (using the new operator) with calls to a special factory method. Objects returned by a factory method are often referred to as "products."

When should you use the Factory Design Pattern?

When you need to delegate the responsibility of deciding which class to instantiate to a factory class.

When you have a class with a large number of subclasses, and you want to avoid making your code dependent on these subclasses.

When the object needs to be extended to subclasses, and these are required at runtime.

Now let's apply this to a "Dessert Factory" scenario.

[page 2](./page02.md)
