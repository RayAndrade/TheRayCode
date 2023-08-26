[home](./page01.md)

In this artical I plan review and demontrate the the **Adapter** design pattern using C++.

We start by creating a class we call **Target**.

The **Target** defines the domain-specific interface used by the client code.

A .h file
```
Target
```

```
class Target { };
```

we are going to need

```
#include <iostream>
```

we add some code

```
public:
    virtual ~Target() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
```

[page 2](./page02.md)
