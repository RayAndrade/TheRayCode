[home](./page01.md)

[back](./page01.md)

Next we add the

```
Adaptee
```

The Adaptee class is one that has a different interface (SpecificRequest) than what clients might expect based on the Target class. 
This is a class you might need to adapt in order to make it work seamlessly with existing or new code.


```
#include "Target.h"
```

for our class
```
class Adaptee { };
```
we add the following code

```
public:
    std::string SpecificRequest() const {
        return "!!!EMOSEWA si edoC yaR ehT";
    }
```

note Target already has **iostream**

[page 3](./page03.md)
