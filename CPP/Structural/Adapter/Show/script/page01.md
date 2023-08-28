[home](./page01.md)

We start with 
```
Target
```

it will need
```
#include <iostream>
```

to create the class
```
class Target { };
```

add code
```
public:
    virtual ~Target() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
```


[page 2](./page02.md)
