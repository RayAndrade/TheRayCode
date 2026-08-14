[home](./page01.md) | [back](./page01.md) | [next](./page03.md)

The Bridge design pattern is a structural pattern used to decouple an abstraction from its implementation so that the two can vary independently. 

This pattern involves an interface which acts as a bridge between the abstraction and its implementation classes. 

It's particularly useful for scenarios where an abstraction can have multiple implementations.

We start be createing **interface** to make out two remotes, Sony and Samsung, the same type:
```
TV
```
we require users of this interface to have the following methinds
```
void on();
void off();
void tuneChannel(int channel);
```
This interface declares methods that will be implemented by concrete TV classes.

[page 3](./page03.md)
