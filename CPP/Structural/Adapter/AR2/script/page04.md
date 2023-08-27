[home](./page01.md)

[back](./page03.md)

first we have includes

```
#include <memory>
#include "RemoteDisplay.h"
#include "LocalDisplay.h"
#include "DispayAdapter.h"
```
We attach the  **RemoteDisplay**

for **MsgRed**
```
void RemoteDisplay::MsgRed(std::string message) const {
    std::cout << "R: " << message << std::endl;
}
```

for **MsgBlue**
```
void RemoteDisplay::MsgBlue(std::string message) const {
    std::cout << "B: " << message << std::endl;
}
```

for **MsgGreen**
```
void RemoteDisplay::MsgGreen(std::string message) const {
    std::cout << "G: " << message << std::endl;
}
```

for **MsgYellow**
```
void RemoteDisplay::MsgYellow(std::string message) const {
    std::cout << "Y: " << message << std::endl;
}
```




[page 5](./page05.md)
