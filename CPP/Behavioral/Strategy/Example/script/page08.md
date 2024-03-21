[home](./page01.md) | [back](./page07.md) | [next](./page09.md)

**step 7**

We ctreate **Context.cpp**
```
Context
```
at the top
```
#include "Context.h"
```



```
Context::Context(Strategy* strategy) : strategy_(strategy) {}
```
and
```
void Context::setStrategy(Strategy* strategy) {
    strategy_ = strategy;
}
```


and
```
void Context::executeStrategy() {
    if (strategy_)
        strategy_->execute();
}
```


[page 9](./page09.md)
