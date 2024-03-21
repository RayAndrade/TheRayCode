[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

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

[page 8](./page08.md)
