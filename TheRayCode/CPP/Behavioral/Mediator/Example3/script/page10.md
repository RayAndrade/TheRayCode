[home](./page01.md)

[back](./page09.md)

```
#include <iostream>
#include "Batman.h"
#include "Superman.h"
#include "WonderWoman.h"
#include "JusticeLeagueMediatorImpl.h"
```

inside the **main** function:
```
JusticeLeagueMediatorImpl mediator;

Batman bruce(&mediator);
Superman clark(&mediator);
WonderWoman diana(&mediator);

mediator.addMember(&bruce);
mediator.addMember(&clark);
mediator.addMember(&diana);

bruce.send("I've located the Joker.");
diana.send("I'll be there in a minute.");
```


[page 11](./page11.md)
