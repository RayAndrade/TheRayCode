[up](../README.md)

Certainly! The Proxy design pattern is a structural design pattern that provides an object acting as a substitute or placeholder for another object to control access to it. This is useful for managing operations that are resource-intensive, or need to be controlled for security reasons, among other use cases.

In the context of the Proxy pattern, there are typically three participant roles:
1. **Subject**: An interface that defines common operations for both the RealSubject and the Proxy.
2. **RealSubject**: The real object that the Proxy represents.
3. **Proxy**: Maintains a reference that lets the proxy access the real subject. Proxy may control access to the real subject, handle instantiation and deletion, or perform additional operations such as lazy initialization and execution.

Let's create a humorous example where the `RealSubject` is a `Wizard` and the `Proxy` is a `WizardProxy`, controlling access to the `Wizard` for casting spells.

### Step 1: Subject Interface - Subject.h

```cpp
// Subject.h
#ifndef SUBJECT_H
#define SUBJECT_H

#include <string>

// Subject interface declaring common operations for RealSubject and Proxy
class Subject {
public:
    virtual ~Subject() {}
    virtual void castSpell(const std::string& spell) = 0;
};

#endif // SUBJECT_H
```

### Step 2: RealSubject Class - Wizard.h

```cpp
// Wizard.h
#ifndef WIZARD_H
#define WIZARD_H

#include "Subject.h"
#include <iostream>

// RealSubject class that the Proxy represents
class Wizard : public Subject {
public:
    void castSpell(const std::string& spell) override {
        std::cout << "Wizard casts " << spell << " with a flick of his wand!" << std::endl;
    }
};

#endif // WIZARD_H
```

### Step 3: Proxy Class - WizardProxy.h

```cpp
// WizardProxy.h
#ifndef WIZARDPROXY_H
#define WIZARDPROXY_H

#include "Subject.h"
#include "Wizard.h"
#include <iostream>

// Proxy class controlling access to the Wizard
class WizardProxy : public Subject {
private:
    Wizard* wizard; // Pointer to the real subject
public:
    WizardProxy() : wizard(new Wizard()) {}
    ~WizardProxy() {
        delete wizard;
    }

    void castSpell(const std::string& spell) override {
        // Control access or modify behavior
        if (spell == "Fireball") {
            std::cout << "Proxy: Let's not burn things down. Choose a different spell." << std::endl;
        } else {
            std::cout << "Proxy: Spell approved by the council." << std::endl;
            wizard->castSpell(spell);
        }
    }
};

#endif // WIZARDPROXY_H
```

### Step 4: Main Demo - main.cpp

```cpp
// main.cpp
#include "WizardProxy.h"
#include <iostream>

int main() {
    WizardProxy proxy;
    proxy.castSpell("Fireball");
    proxy.castSpell("Levitation");

    std::cout << "End of the magical demonstration. Remember, with great power comes great responsibility... and sometimes a sneaky proxy." << std::endl;

    return 0;
}
```

### Order of Creation
1. **Subject.h**: Define the common interface for RealSubject and Proxy.
2. **Wizard.h**: Implement the real object that performs the actual operations.
3. **WizardProxy.h**: Implement the proxy which controls access to the `Wizard`.
4. **main.cpp**: Demonstrate the use of the Proxy to control access to `Wizard`'s methods.

### Expected Output
When you run the code, you should see something like this:

```
Proxy: Let's not burn things down. Choose a different spell.
Proxy: Spell approved by the council.
Wizard casts Levitation with a flick of his wand!
End of the magical demonstration. Remember, with great power comes great responsibility... and sometimes a sneaky proxy.
```

This humorous example demonstrates the Proxy pattern by controlling which spells are allowed to be cast, showcasing how a Proxy can add a layer of control or additional behavior to method calls.
