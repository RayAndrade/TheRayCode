[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**step 2**

**ConcreteStrategyA.h**

```
ConcreteStrategyA
```
At the top we
```
#include "Strategy.h"
```
We Start with
```
class ConcreteStrategyA  { };
```
We extend it with just 
```
 : public Strategy
```
For the code we have **execute() override**
```
public:
void execute() override;
```



[page 4](./page04.md)
