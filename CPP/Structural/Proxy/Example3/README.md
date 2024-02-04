[up](../README.md)

Let's adapt the Proxy design pattern example to a big top circus theme, where the `RealSubject` is a `Clown` performing acts, and the `Proxy` is a `ClownProxy`, controlling access to the `Clown` for performing acts.

### Step 1: Subject Interface - Performer.h

```cpp
// Performer.h
#ifndef PERFORMER_H
#define PERFORMER_H

#include <string>

// Performer interface declaring common operations for RealSubject and Proxy
class Performer {
public:
    virtual ~Performer() {}
    virtual void performAct(const std::string& act) = 0;
};

#endif // PERFORMER_H
```

### Step 2: RealSubject Class - Clown.h

```cpp
// Clown.h
#ifndef CLOWN_H
#define CLOWN_H

#include "Performer.h"
#include <iostream>

// RealSubject class that the Proxy represents
class Clown : public Performer {
public:
    void performAct(const std::string& act) override {
        std::cout << "Clown performs a hilarious " << act << " act!" << std::endl;
    }
};

#endif // CLOWN_H
```

### Step 3: Proxy Class - ClownProxy.h

```cpp
// ClownProxy.h
#ifndef CLOWNPROXY_H
#define CLOWNPROXY_H

#include "Performer.h"
#include "Clown.h"
#include <iostream>

// Proxy class controlling access to the Clown
class ClownProxy : public Performer {
private:
    Clown* clown; // Pointer to the real subject
public:
    ClownProxy() : clown(new Clown()) {}
    ~ClownProxy() {
        delete clown;
    }

    void performAct(const std::string& act) override {
        // Control access or modify behavior
        if (act == "fire-eating") {
            std::cout << "Proxy: Sorry, fire-eating is too dangerous for today's show. Choose a different act." << std::endl;
        } else {
            std::cout << "Proxy: Act approved by the circus manager." << std::endl;
            clown->performAct(act);
        }
    }
};

#endif // CLOWNPROXY_H
```

### Step 4: Main Demo - main.cpp

```cpp
// main.cpp
#include "ClownProxy.h"
#include <iostream>

int main() {
    ClownProxy proxy;
    proxy.performAct("fire-eating");
    proxy.performAct("juggling");

    std::cout << "End of the circus show. Remember, every act is a blend of thrill and laughter, especially when there's a proxy in the tent!" << std::endl;

    return 0;
}
```

### Order of Creation
1. **Performer.h**: Define the common interface for RealSubject and Proxy.
2. **Clown.h**: Implement the real object (`Clown`) that performs the actual acts.
3. **ClownProxy.h**: Implement the proxy which controls access to the `Clown`.
4. **main.cpp**: Demonstrate the use of the Proxy to control access to `Clown`'s methods.

### Expected Output
When you run the code, you should see something like this:

```
Proxy: Sorry, fire-eating is too dangerous for today's show. Choose a different act.
Proxy: Act approved by the circus manager.
Clown performs a hilarious juggling act!
End of the circus show. Remember, every act is a blend of thrill and laughter, especially when there's a proxy in the tent!
```

This circus-themed example humorously illustrates the Proxy pattern by controlling which acts are safe or suitable for the clown to perform, showcasing how a Proxy can add a layer of control or additional behavior to method calls in a fun and engaging manner.
