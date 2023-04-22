[Home](page01.md)

[Back 5](page05.md)

```
ToyFactory
```

This is an abstract base class that defines the interface for all toy factories. It has two pure virtual methods createActionFigure() and createPlushToy() that must be implemented by all concrete factory classes. These methods are used to create specific types of toys.

```
class ToyFactory { };
```

```
public:
    virtual Toy* createActionFigure() = 0;
    virtual Toy* createPlushToy() = 0;
```


[Next 7](page07.md)
