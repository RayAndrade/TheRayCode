[Home](page01.md)

[Back 7](page07.md)


```
AnimalFactory
```

This is another concrete class that inherits from ToyFactory and represents a type of factory that creates animal-themed toys. It also overrides the createActionFigure() and createPlushToy() methods from ToyFactory to provide specific implementations for creating animal action figure and plush toy objects.


```
class AnimalFactory { };
```

```
: public ToyFactory
```

```
public:
    Toy* createActionFigure() override;
    Toy* createPlushToy() override;
```
[Next 9](page09.md)
