[home](./page01.md) | [back](./page08.md) | [next](./page10.md)

**step 8**

And finally, the **main.cpp** file:
ADD
```
#include "ConcreteStrategyA.h"
#include "ConcreteStrategyB.h"
#include "Context.h"
```
in the main

```
ConcreteStrategyA strategyA;
ConcreteStrategyB strategyB;
    
Context context(&strategyA); // Start with strategy A
context.executeStrategy(); // Output should be "Executing Concrete Strategy A"
    
context.setStrategy(&strategyB); // Switch to strategy B
context.executeStrategy(); // Output should be "Executing Concrete Strategy B"
```

[page 10](./page10.md)
