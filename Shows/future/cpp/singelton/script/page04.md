[home](./page01.md)

[back](./page03.md)

In the Demo.cpp file, we demonstrate the usage of the Singleton pattern. 

```
#include <iostream>
#include "Singleton.h"
```
We create two instances s1 and s2 using the getInstance() method, and print their addresses to verify they are the same. 

```
Singleton* s1 = Singleton::getInstance();
Singleton* s2 = Singleton::getInstance();
```

add code
```
std::cout << "Address of s1: " << s1 << std::endl;
std::cout << "Address of s2: " << s2 << std::endl;

Singleton s3;  // Error: Constructor is private

```

We also attempt to create a new instance s3 using the constructor, but it results in a compilation error due to the private constructor.


[page 5](./page05.md)
