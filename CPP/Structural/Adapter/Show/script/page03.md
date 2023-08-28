[home](./page01.md)

[back](./page02.md)

let's create  the
```
Adapter
```
for our incudes we have
```
#include <algorithm>
#include "Adaptee.h"
```
note that **Adaptee** already has **Target**

so for our class we have
```
class Adapter  : public Target{ };
```

we add code to the class
```
private:
    Adaptee *adaptee_;
```
our private local **Adaptee**

next we add
```
public:
    Adapter(Adaptee *adaptee) : adaptee_(adaptee) {}
    std::string Request() const override {
        std::string to_reverse = this->adaptee_->SpecificRequest();
        std::reverse(to_reverse.begin(), to_reverse.end());
        return "Adapter: (TRANSLATED) " + to_reverse;
    }
```
now let's go to main


[page 4](./page04.md)
