[home](./page01.md)

[back](./page02.md)


```
ConcretePrototype
```

```
class ConcretePrototype {  };
```

```
: public Prototype
```


```
#include "Prototype.h"
```

```
public:
    ConcretePrototype(int value): value_(value){}
    ConcretePrototype(const ConcretePrototype& other): value_(other.value_){}
    virtual ~ConcretePrototype(){}
    virtual Prototype* clone() const override {
        return new ConcretePrototype(*this);
    }
    int getValue() { return value_; }
private:
    int value_;
```

This is a concrete class implementing the Prototype interface. It defines the clone method to return a copy of itself.

Here, ConcretePrototype is derived from Prototype and has a member data. It overrides the clone() method to create and return a copy of itself, which leads to deep cloning. 

Also, it has a copy constructor which enables deep cloning.

[page 4](./page04.md)
