[up](../README.md)  | [script](script/page01.md)

**Listener.h**
```
#include <iostream>
#include <memory>

class Listener {
public:
    virtual ~Listener() = default;
    void setNext(std::shared_ptr<Listener> nextListener) { this->nextListener = nextListener; }
    virtual void shareFeelings(const std::string& feeling) = 0;

protected:
    std::shared_ptr<Listener> nextListener;
};

```

**class Child**
```
#include "Listener.h"

class Child : public Listener {
public:
    void shareFeelings(const std::string& feeling) override {
        if (feeling == "loneliness") {
            std::cout << "Child: I feel lonely too, but I don't know how to help...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        } else {
            std::cout << "Child: I'm just a kid, maybe someone else will understand better...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        }
    }
};
```

**class Mother**
```
#include "Listener.h"

class Mother : public Listener {
public:
    void shareFeelings(const std::string& feeling) override {
        if (feeling == "loss") {
            std::cout << "Mother: I've experienced loss too, but I'm overwhelmed...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        } else {
            std::cout << "Mother: I wish I could help, but I have my own sorrows...\n";
            if (nextListener) nextListener->shareFeelings(feeling);
        }
    }
};
```
**class Grandmother**
```
#include "Listener.h"

class Grandmother : public Listener {
public:
    void shareFeelings(const std::string& feeling) override {
        std::cout << "Grandmother: I've seen many things, felt many pains. Come, let's talk...\n";
    }
};
```

At **main.cpp**
```
#include "Child.h"
#include "Mother.h"
#include "Grandmother.h"

int main() {
    auto child = std::make_shared<Child>();
    auto mother = std::make_shared<Mother>();
    auto grandmother = std::make_shared<Grandmother>();

    child->setNext(mother);
    mother->setNext(grandmother);

    std::cout << "Sharing a feeling of loneliness:\n";
    child->shareFeelings("loneliness");

    std::cout << "\nSharing a feeling of loss:\n";
    child->shareFeelings("loss");

    return 0;
}
```

When you RUN:
```
Sharing a feeling of loneliness:
Child: I feel lonely too, but I don't know how to help...
Mother: I wish I could help, but I have my own sorrows...
Grandmother: I've seen many things, felt many pains. Come, let's talk...

Sharing a feeling of loss:
Child: I'm just a kid, maybe someone else will understand better...
Mother: I've experienced loss too, but I'm overwhelmed...
Grandmother: I've seen many things, felt many pains. Come, let's talk...
```

















