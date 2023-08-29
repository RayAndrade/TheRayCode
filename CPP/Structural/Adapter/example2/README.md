
**Interface1.h**

```
class Interface1
{
public:
    virtual void Method1() = 0;
};
```

**Object1.h**

```
#include "Interface1.h"

class Object1 : public Interface1
{
public:
    virtual void Method1() override {}
};
```

**Interface2.h**

```
class Interface2
{
public:
    virtual void Method2() = 0;
};
```

**Object2.h**

```
#include "Interface2.h"

class Object2 : public Interface2
{
public:
    virtual void Method2() override {}
};
```

**Adapter.h**
```
#include "Interface1.h"
#include "Interface2.h"

class Adapter : public Interface1
{
public:
    explicit Adapter(Interface2* o) : obj{ o } {}
    virtual void Method1() override { obj->Method2(); }
private:
    Interface2* obj = nullptr;
};
```

**main.cpp**

```
#include <iostream>
#include "Interface1.h"
#include "Interface2.h"
#include "Object2.h"
#include "Adapter.h"

void Codebase1(Interface1* obj) {}

void Codebase2(Interface2* obj) {}

int main() {
    Object2 obj;
    Adapter adp(&obj);
    Codebase1(&adp);
}
```
