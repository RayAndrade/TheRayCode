[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

**step 4**

For **Context.h**
```
Context
```
At the top we
```
#include "Strategy.h"
```
for the class
```
class Context {  };
```
we add **public**
```
public:
Context(Strategy* strategy);
void setStrategy(Strategy* strategy);
void executeStrategy();
```
And **private**
```
private:
Strategy* strategy_;
```
   


[page 6](./page06.md)
