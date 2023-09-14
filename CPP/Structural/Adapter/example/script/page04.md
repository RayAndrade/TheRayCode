[home](./page01.md)

[back](./page03.md)

Now let's put this altogther in main

we start with

```
#include <iostream>
#include <algorithm>
#include "Adapter.h"
```

we have a client
```
void ClientCode(const Target *target) {
    std::cout << target->Request();
}
```

next

```
std::cout << "Client: I can work just fine with the Target objects:\n";
Target *target = new Target;
ClientCode(target);
std::cout << "\n\n";
```

next
```
Adaptee *adaptee = new Adaptee;
std::cout << "Client: The Adaptee class has a weird interface. See, I don't understand it:\n";
std::cout << "Adaptee: " << adaptee->SpecificRequest();
std::cout << "\n\n";
```

we apply the **Adapter**

```
std::cout << "Client: But I can work with it via the Adapter:\n";
Adapter *adapter = new Adapter(adaptee);
ClientCode(adapter);
std::cout << "\n";
```

Do some clean up

```
delete target;
delete adaptee;
delete adapter;
```

and run

The following steps take place in the main function:

A default Target object is created and its Request method is called using the ClientCode function.
An Adaptee object is created and its SpecificRequest method is directly called, demonstrating that its interface is different (and possibly confusing or not directly usable) from the expected Target interface.
However, it seems there's a part missing in the main function. The creation and demonstration of the Adapter class's functionality aren't shown. You'd typically see the Adapter in use like:

cpp
Copy code
std::cout << "Client: But I can work with it via the Adapter:\n";
Target *adapter = new Adapter(adaptee);
ClientCode(adapter);
This would show that, with the Adapter, the Adaptee can be used in places where a Target is expected. The Adapter translates the call to the Adaptee's method and provides a result in line with what's expected from the Target's method.



[page 5](./page05.md)
