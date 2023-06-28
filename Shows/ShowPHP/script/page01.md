[home](./page01.md)

The **Prototype Design Pattern** comes under the category of *creational patterns*. 
In this pattern, we create objects by cloning a prototypical instance at runtime. 
This is useful when object initialization is costly, and you want to efficiently produce a copy of a pre-existing, initialized instance.

**Shallow Copy**: A shallow copy of an object is a new object which is a copy of the original object. The new object refers to the same memory locations as the original one. So changes in one object's properties will also reflect on the other. In the context of a PHP object, a shallow copy will not clone nested objects. Instead, the new and original objects will reference the same nested objects.

**Deep Copy**: A deep copy is a process in which the copying process occurs recursively. 
It means that any modification in the new object will not affect the original object in any case, as a completely separate copy is created. 
In the context of a PHP object, a deep copy will also clone nested objects.

[page 2](./page02.md)
