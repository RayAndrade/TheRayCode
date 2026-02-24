[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Explanation and Details

**ClownPrototype.h:** This abstract class defines the prototype interface with a clone method that must be implemented by any class that inherits from it.

**Clown.h:**
The Clown class inherits from ClownPrototype and represents a specific clown.

It contains a private string name to identify the clown.

The clone method creates a new Clown object by copying the current object (shallow copy).

The perform method is an example action that a clown might do.

**main.cpp:**
Creates an original clown.

Clones the clown using the clone method.

Both original and cloned clowns perform an action.

Proper memory management is demonstrated with delete.

[page 6](./page06.md)
