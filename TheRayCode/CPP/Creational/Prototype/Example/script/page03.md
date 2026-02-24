[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**Prototype Interface (Prototype.h)**

This is an abstract class defining the interface for cloning itself. It typically contains a clone() method.

```
Prototype
```

```
class Prototype {  };
```

```
public:
virtual ~Prototype() {}
virtual Prototype* clone() const = 0;
```



[page 4](./page04.md)
