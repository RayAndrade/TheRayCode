[home](./page01.md) | [back](./page01.md) [next](./page03.md)

Let's create a **Component** Abstract class to use as a common base interface

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
