[home](./page01.md)

[back](./page04.md)

**Adapter.h**

```
Adapter
```
Here's where things get a bit more interesting:

The Adapter class is an example of the Adapter design pattern.

It allows classes with incompatible interfaces to work together.

This class inherits from Interface1 and accepts an object of type Interface2 in its constructor.

It overrides the Method1() function. When Method1() is called on an Adapter object, it internally calls the Method2() method of the Interface2 object it wraps.

The purpose is to adapt or 'translate' calls from Method1() to Method2().

[page 6](./page06.md)
