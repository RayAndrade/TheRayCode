**Target.h**

```cpp
#include <iostream>

class Target {
public:
    virtual ~Target() = default;
    virtual std::string Request() const {
        return "Target: The default target's behavior.";
    }
};
```

**Adaptee.h**

```cpp
#include "Target.h"

class Adaptee {
public:
    std::string SpecificRequest() const {
        return "!!!EMOSEWA si edoC yaR ehT";
};
```

**Adapter.h**

```cpp
#include <algorithm>
#include "Adaptee.h"

class Adapter : public Target{
private:
    Adaptee *adaptee_;
public:
    Adapter(Adaptee *adaptee) : adaptee_(adaptee) {}
    std::string Request() const override {
        std::string to_reverse = this->adaptee_->SpecificRequest();
        std::reverse(to_reverse.begin(), to_reverse.end());
        return "Adapter: (TRANSLATED) " + to_reverse;
    }
};

```

**main.cpp**

```cpp
#include <iostream>
#include <algorithm>
#include "Adapter.h"

void ClientCode(const Target *target) {
    std::cout << target->Request();
}

int main() {
    std::cout << "Client: I can work just fine with the Target objects:\n";
    Target *target = new Target;
    ClientCode(target);
    std::cout << "\n\n";

    Adaptee *adaptee = new Adaptee;
    std::cout << "Client: The Adaptee class has a weird interface. See, I don't understand it:\n";
    std::cout << "Adaptee: " << adaptee->SpecificRequest();
    std::cout << "\n\n";
    return 0;
}
```

