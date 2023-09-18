**Visitor.h**

```
class ComponentA;
class ComponentB;

class Visitor {
public:
    virtual void VisitConcreteComponentA(const ComponentA *element) const = 0;
    virtual void VisitConcreteComponentB(const ComponentB *element) const = 0;
};
```


**Component.h**

```
#include "Visitor.h"

class Component {
public:
    virtual ~Component() {}
    virtual void Accept(Visitor *visitor) const = 0;
};
```
**ComponentA.h**

```
#include <iostream>
#include <array>
#include "Component.h"

class ComponentA : public Component {
    /**
     * Note that we're calling `visitConcreteComponentA`, which matches the
     * current class name. This way we let the visitor know the class of the
     * component it works with.
     */
public:
    void Accept(Visitor *visitor) const  {
        visitor->VisitConcreteComponentA(this);
    }
    /**
     * Concrete Components may have special methods that don't exist in their base
     * class or interface. The Visitor is still able to use these methods since
     * it's aware of the component's concrete class.
     */
    std::string ExclusiveMethodOfConcreteComponentA() const {
        return "A";
    }
};
```

**ComponentB.h**

```
#include <iostream>
#include <array>
#include "Visitor.h"
#include "Component.h"

class ComponentB : public Component {
    /**
     * Same here: visitConcreteComponentB => ComponentB
     */
public:
    void Accept(Visitor *visitor) const override {
        visitor->VisitConcreteComponentB(this);
    }
    std::string SpecialMethodOfConcreteComponentB() const {
        return "B";
    }
};
```

**Visitor1.h**

```
#include "ComponentA.h"
#include "ComponentB.h"

class Visitor1 : public Visitor {
public:
    void VisitConcreteComponentA(const ComponentA *element) const override {
        std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + Visitor1" << std::endl;
    }

    void VisitConcreteComponentB(const ComponentB *element) const override {
        std::cout << element->SpecialMethodOfConcreteComponentB() << " + Visitor1" << std::endl;
    }
};
```

**Visitor2.h**

```
#include <iostream>
#include <array>
#include "ComponentA.h"
#include "ComponentB.h"

class Visitor2 : public Visitor {
public:
    void VisitConcreteComponentA(const ComponentA *element) const override {
        std::cout << element->ExclusiveMethodOfConcreteComponentA() << " + Visitor2" << std::endl;
    }
    void VisitConcreteComponentB(const ComponentB *element) const override {
        std::cout << element->SpecialMethodOfConcreteComponentB() << " + Visitor2" << std::endl;
    }
};
```

**main.cpp**

```
#include "Visitor.h"
#include "Component.h"

#include "Visitor1.h"
#include "Visitor2.h"

#include "ComponentA.h"
#include "ComponentB.h"


void ClientCode(std::array<const Component *, 2> components, Visitor *visitor) {
    // ...
    for (const Component *comp : components) {
        comp->Accept(visitor);
    }
    // ...
}

int main() {
    std::array<const Component *, 2> components = {new ComponentA, new ComponentB};
    std::cout << "The client code works with all visitors via the base Visitor interface:\n";
    Visitor1 *visitor1 = new Visitor1;
    ClientCode(components, visitor1);
    std::cout << "\n";
    std::cout << "It allows the same client code to work with different types of visitors:\n";
    Visitor2 *visitor2 = new Visitor2;
    ClientCode(components, visitor2);

    for (const Component *comp : components) {
        delete comp;
    }
    delete visitor1;
    delete visitor2;

    return 0;
}
```



