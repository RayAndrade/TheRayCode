[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Creating a C++ example using the Decorator Design Pattern involves several steps. 

This design pattern is used to add new functionalities to objects dynamically without altering their structure. 

Here's how you can structure your C++ project using this pattern:

Let's create a **Component** Abstract class to use as a common base interface

This is a base interface for our **Concrete Component**
```
Component
```
for the class structure
```
class Component {  };
```
and we add the following to handle the **operation** method
```
public:
virtual ~Component() {}
virtual void operation() = 0;
```
