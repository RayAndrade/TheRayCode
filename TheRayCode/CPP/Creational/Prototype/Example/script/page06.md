[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Class Explanation

**Prototype.h:** This abstract class has a pure virtual clone() method, which is overridden by concrete implementations. It's the core of the Prototype pattern.

**ConcretePrototype.h:** Inherits from Prototype and implements the clone() method. It contains specific data that will be cloned.

**main.cpp:** Creates an instance of ConcretePrototype, clones it, and then displays the data of both the original and cloned instances.

Order of Class Creation

1. Prototype Interface: Start by defining the abstract base class (Prototype.h) to establish the cloning interface.

2. Concrete Prototype: Implement the concrete class (ConcretePrototype.h) that will be cloned.

3.    Main Application: Finally, use the main.cpp to demonstrate the pattern.

[page 7](./page07.md)
