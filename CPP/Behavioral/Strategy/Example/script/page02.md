[home](./page01.md) | [back](./page01.md) [next](./page03.md)

**step 1**

Create **Strategy.h**
```
Strategy
```

The Strategy class is an interface defining a family of algorithms, while **ConcreteStrategyA** and **ConcreteStrategyB** are concrete implementations of these algorithms.

```
// Abstract Strategy class
class Strategy {  };
```
We add:
```
public:
virtual ~Strategy() {}
virtual void execute() = 0;
```

[page 3](./page03.md)
