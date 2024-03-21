[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

**step 3**

**ConcreteStrategyB.h**
```
ConcreteStrategyB
```
At the top we
```
#include "Strategy.h"
```
for our class
```
class ConcreteStrategyB {  };
```
We extend it with
```
 : public Strategy
```
For code we have
```
public:
void execute() override;
```

[page 5](./page05.md)
