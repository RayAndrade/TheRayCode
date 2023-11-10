[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**Sandwich.h**

```
Sandwich
```

```
#include <string>
#include <vector>
#include <iostream>
```
 
Sandwich is the complex object that is created by the builder.

```
class Sandwich {  };
```
private varables for a sandwich: **bread**, **meat** and **cheese**

vectors for the **vegetables** and **condiments**
```
private:
    std::string bread;
    std::string meat;
    std::string cheese;
    std::vector<std::string> vegetables;
    std::vector<std::string> condiments;
```



[page 4](./page04.md)
