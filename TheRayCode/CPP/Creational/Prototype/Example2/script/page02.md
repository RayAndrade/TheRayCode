[home](./page01.md)

[back](./page01.md)

Create class **Prototype**

```
Prototype
```

```
class Prototype {  };
```


```
public:
    virtual ~Prototype(){}
    virtual Prototype* clone() const = 0;
```

This is the Prototype base class. It declares a method for cloning itself.

This is the base class Prototype with a pure virtual function clone() which will be implemented by derived classes.

[page 3](./page03.md)
