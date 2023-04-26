[home](./page01.md)
[back](./page04.md)

CarToyFactory.h - Concrete factory class for creating car toys:

```
CarToyFactory
```

CarToyFactory is a concrete factory that creates car toys by implementing the createToy() method.

```
class CarToyFactory { };
```

```
: public ToyFactory
```

```
public:
    Toy* createToy() override {
        std::cout << "CarToyFactory :ToyFactory" << std::endl;
        return new CarToy();
    }
```


[page 06](./page06.md)

