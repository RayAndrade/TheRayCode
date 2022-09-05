Inspired by **Adapter Pattern Explained (in C++)**.

[Artical on YouTube](https://youtu.be/5dfRV5uWLy4)

Focus on chatper 17 of Hands On Design Patterns
I do have this book.

What is the motivation to the pattern?

Adapts interface of codebase 1 so it can be consumed by codebase 2 by translating callse between incompatable interfaces.

Unlike decorator, adapter implements 2 unterfaces not 1.

Can be applied at *runtime* to unterface/class/function.

Can be owning of non-owning of the class being adapted.

Now let's consider the case where we have 2 incompatable code bases:

with Indterface 1
```cpp
class Interface1
{
public:
    virtual void Method1() = 0;
};
```

and Interface2

```cpp
class Interface2
{
public:
    virtual void Method2() = 0;
};
```

we have 2 diffent objects that use those interfaces resepctively.

For Object 1

```cpp
#include "Interface1.h"

class Object1 : public Interface1
{
public:
    virtual void Method1() override {}
};
```

and for Object2

```cpp
#include "Interface2.h"

class Object2 : public Interface2
{
public:
    virtual void Method2() override {}
};
```

at main we add.

```cpp
#include "Interface1.h"
#include "Interface2.h"
#include "Object2.h"
#include "Adapter.h"

void Codebase1(Interface1* obj) {}

void Codebase2(Interface2* obj) {}
```

So for our project we introduce an adapter

```cpp
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
back at main we can write

```cpp
Object2 obj;
Adapter adp(&obj);
Codebase1(&adp);
```




