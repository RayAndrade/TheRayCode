[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

now to main
at the top
```
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
```

```
Component* simple = new ConcreteComponent();
Component* decorated = new ConcreteDecoratorA(simple);
```

```
std::cout << "Running basic component:\n";
simple->operation();
```

```
std::cout << "\nRunning decorated component:\n";
decorated->operation();
```

```
delete simple;
delete decorated;
```



[page 7](./page07.md)
