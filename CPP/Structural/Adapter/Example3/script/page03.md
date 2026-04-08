[home](./page01.md)

[back](./page02.md)


next we create the

```
Adapter
```

The Adapter class aims to bridge the gap between the Target interface and the Adaptee interface. It does so by inheriting from Target and taking an Adaptee object as its member. The Request method of the Adapter class then calls SpecificRequest from its Adaptee member, reverses the result, and returns it with an additional prefix.

we will nee the flowing include

```
#include <algorithm>
#include "Adaptee.h"
```

**algorithm** because we will be using the **to_reverse**

```
class Adapter { };
```
we add

```
 : public Target
```

first we have a 

```
private:
    Adaptee *adaptee_;
```

then we add 

```
public:
    Adapter(Adaptee *adaptee) : adaptee_(adaptee) {}
    std::string Request() const override {
        std::string to_reverse = this->adaptee_->SpecificRequest();
        std::reverse(to_reverse.begin(), to_reverse.end());
        return "Adapter: (TRANSLATED) " + to_reverse;
    }
```


[page 4](./page04.md)
