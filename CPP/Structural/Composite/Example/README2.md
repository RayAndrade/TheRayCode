**Component.h**:

```
#include <iostream>

class Component {
protected:
    Component *parent_;

public:
    virtual ~Component() {}
    void SetParent(Component *parent) {
        this->parent_ = parent;
    }
    Component *GetParent() const {
        return this->parent_;
    }
    virtual void Add(Component *component) {}
    virtual void Remove(Component *component) {}
    virtual bool IsComposite() const {
        return false;
    }
    virtual std::string Operation() const = 0;
};
```

**Composite.h**:

```
#include <list>
#include "Component.h"

class Composite : public Component {
    /**
     * @var \SplObjectStorage
     */
protected:
    std::list<Component *> children_;

public:
    void Add(Component *component) override {
        this->children_.push_back(component);
        component->SetParent(this);
    }
    void Remove(Component *component) override {
        children_.remove(component);
        component->SetParent(nullptr);
    }
    bool IsComposite() const override {
        return true;
    }
    std::string Operation() const override {
        std::string result;
        for (const Component *c : children_) {
            if (c == children_.back()) {
                result += c->Operation();
            } else {
                result += c->Operation() + "+";
            }
        }
        return "Branch(" + result + ")";
    }
};
```

**Composite.h**

```
#include "Component.h"

class Composite : Component
{
public override string Operation()
    {
        return "Leaf";
    }
public override bool IsComposite()
    {
        return false;
    }
};
```

**main.cpp**

```
#include "Leaf.h"
#include "Composite.h"
void ClientCode(Component *component) {
    // ...
    std::cout << "RESULT: " << component->Operation();
    // ...
}

void ClientCode2(Component *component1, Component *component2) {
    if (component1->IsComposite()) {
        component1->Add(component2);
    }
    std::cout << "RESULT: " << component1->Operation();
}
int main() {
    Component *simple = new Leaf;
    std::cout << "Client: I've got a simple component:\n";
    ClientCode(simple);
    std::cout << "\n\n";
    Component *tree = new Composite;
    Component *branch1 = new Composite;

    Component *leaf_1 = new Leaf;
    Component *leaf_2 = new Leaf;
    Component *leaf_3 = new Leaf;
    branch1->Add(leaf_1);
    branch1->Add(leaf_2);
    Component *branch2 = new Composite;
    branch2->Add(leaf_3);
    tree->Add(branch1);
    tree->Add(branch2);
    std::cout << "Client: Now I've got a composite tree:\n";
    ClientCode(tree);
    std::cout << "\n\n";

    std::cout << "Client: I don't need to check the components classes even when managing the tree:\n";
    ClientCode2(tree, simple);
    std::cout << "\n";

    delete simple;
    delete tree;
    delete branch1;
    delete branch2;
    delete leaf_1;
    delete leaf_2;
    delete leaf_3;
    return 0;
}
```
























