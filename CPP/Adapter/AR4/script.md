We start by creating the dot h file **Targer.h**.

```cpp
class Target
{
public:
    virtual void Request() = 0 ;
    virtual ~Target()=default ;
};
```

Now create the class/header file combo **Adaptee**.

for **Adaptee.h**

```cpp
class Adaptee {
public :
    void SpecificRequest() ;
};
```

and for **Adaptee.cpp**

```cpp
#include "Adapter.h"
#include <iostream>

void Adapter::Request() {
    std::cout << "[Adapter] Calling SpecificRequest\n" ;
    //m_Adaptee.SpecificRequest() ;
    SpecificRequest() ;
}
```

create the **Adapter** class/header file combo.

for **Adapter.h**

```cpp
#include "Target.h"
#include "Adaptee.h"


class Adapter :
        public Target, public Adaptee
{
    Adaptee m_Adaptee ;
public:
    void Request() override;
};
```
and the **Adapter.cpp**

```cpp
#include "Adapter.h"
#include <iostream>

void Adapter::Request() {
    std::cout << "[Adapter] Calling SpecificRequest\n" ;
    //m_Adaptee.SpecificRequest() ;
    SpecificRequest() ;
}
```

npw let's go to the main function
```cpp
#include "Target.h"
#include "Adapter.h"

void Client(Target *pTarget) {
    pTarget->Request() ;
}

int main() {
    Adapter a ;
    Client(&a) ;
}
```
Compile and run yields

```run
[Adapter] Calling SpecificRequest
[Adaptee] SpecificRequest
```









































