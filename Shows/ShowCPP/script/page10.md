[home](./page01.md)

[back](./page09.md)

```
MacButton
```

```
class  MacButton {  };
```

```
: public Button
```

```
#include <iostream>
#include "Button.h"
```


```
public:
    void click() override {
        std::cout << "MacButton click." << std::endl;
    }
```

[page 11](./page11.md)
