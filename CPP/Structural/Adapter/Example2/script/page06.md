[home](./page01.md)

[back](./page05.md)

```
#include "Interface1.h"
#include "Interface2.h"
```

```
class Adapter {  };
```

```
 : public Interface1
```

```
public:
    explicit Adapter(Interface2* o) : obj{ o } {}
    virtual void Method1() override { obj->Method2(); }
```


```
private:
    Interface2* obj = nullptr;
```


[page 7](./page07.md)
