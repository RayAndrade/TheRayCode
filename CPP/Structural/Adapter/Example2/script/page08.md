[home](./page01.md)

[back](./page07.md)

```
#include "Interface1.h"
#include "Interface2.h"
#include "Object2.h"
#include "Adapter.h"
```

```
void Codebase1(Interface1* obj) {}
```

```
void Codebase2(Interface2* obj) {}
```

in the main function replace TheRayCode ... with
```
Object2 obj;
Adapter adp(&obj);
Codebase1(&adp);
```
The essence of this code is to demonstrate how you can use the Adapter design pattern to make classes with differing interfaces work together. 
In this case, you're using the Adapter to 'convert' an Interface2 object into an Interface1 object



[page 9](./page09.md)
