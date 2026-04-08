[home](./page01.md)

We start with the interface

create header file
```
Interface1
```

This defines an **abstract** class, or an interface, named **Interface1**. 
It has a pure virtual function Method1() which means any class that inherits from Interface1 must provide an implementation for this method.

```
class Interface1 {  };
```

add code:
```
public:
    virtual void Method1() = 0;
```


[page 2](./page02.md)
