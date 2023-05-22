[home](./page01.md)

The prototype pattern is a creational design pattern in software development. It is used when the type of objects to create is determined by a prototypical instance, which is cloned to produce new objects. This pattern is used to:

    Avoid subclasses of an object creator in the client application, like the factory method pattern does.
    Avoid the inherent cost of creating a new object in the standard way (e.g., using the 'new' keyword) when it is prohibitively expensive for a given application.

The pattern involves implementing a prototype interface which tells to create a clone of the current object. This is done by creating a function that uses the clone method to create and return a copy of itself.

Here's how you might implement the prototype pattern in C++.

[page 2](./page02.md)
