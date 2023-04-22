[Home](page01.md)

[Back 6](page06.md)


```
SuperheroFactory
```

This is an abstract base class that defines the interface for all toy factories. It has two pure virtual methods createActionFigure() and createPlushToy() that must be implemented by all concrete factory classes. These methods are used to create specific types of toys.


```
class SuperheroFactory { };
```

```
: public ToyFactory
```

```
public:
    Toy* createActionFigure() override;
    Toy* createPlushToy() override;
```

[Next 8](page08.md)
