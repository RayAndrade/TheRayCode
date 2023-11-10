[home](./page01.md) | [back](./page07.md) | [next](./page09.md)

at the **main.cpp**

```
#include <iostream>
#include "Sandwich.h"
#include "SandwichBuilder.h"
#include "ClubSandwichBuilder.h"
#include "SandwichDirector.h"
```

```
SandwichDirector director;
ClubSandwichBuilder clubBuilder;
```

```
director.construct(clubBuilder);
Sandwich* sandwich = clubBuilder.getSandwich();
sandwich->display();
```

```
delete sandwich; // Remember to free resources!
```



[page 9](./page09.md)
