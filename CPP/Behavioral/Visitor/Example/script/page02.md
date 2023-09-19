[home](./page01.md)

[back](./page01.md)

**Visitor.h**

```
class ComponentA;
class ComponentB;
```

```
class Visitor {
public:
    virtual void VisitConcreteComponentA(const ComponentA *element) const = 0;
    virtual void VisitConcreteComponentB(const ComponentB *element) const = 0;
};
```


[page 3](./page03.md)
