[home](./page01.md)

The Factory Design Pattern is one of the most commonly used design patterns in Java. 

In the Factory pattern, we create an object without exposing the creation logic to the client and refer to newly created object using a common interface.

For our specific scenario of a dessert factory, I am going to use the following classes.

**Dessert.java**: This is the interface that all the different types of desserts will implement.

**Sundae.java**: This is a class that implements the Dessert interface to represent a sundae dessert.

**Pie.java**: This is a class that implements the Dessert interface to represent a Pie dessert.

**DessertFactory.java**: This is the Factory class which is used to create different types of Dessert objects.

**Program.java**: This class is used to demonstrate the Factory pattern.


[page 2](./page02.md)