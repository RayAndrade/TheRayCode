Here's an example that demonstrates the **Singleton** pattern using separate header files for each class:

First, let's create the **Singleton** class in a header file named **Singleton.h**. 
This class will have a static method to access the singleton instance:

```
class Singleton {
private:
    static Singleton* instance;

    // Private constructor to prevent direct instantiation
    Singleton();

public:
    // Method to get the singleton instance
    static Singleton* getInstance();
    // Add other methods or data members as needed
};
```
Next, we'll implement the **Singleton** class in a corresponding source file named **Singleton.cpp**. 
In this file, we define the static instance variable and the getInstance() method:
```
// Singleton.cpp
#include "Singleton.h"

Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    // Constructor implementation
}

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}
```

Now, let's create a non-singleton class in its own header file named **NonSingleton.h**. 
This class will serve as a comparison to show that a new instance is created when not using the **Singleton** pattern:

```
class NonSingleton {
public:
    NonSingleton();
    // Add other methods or data members as needed
};
```

In the corresponding source file "NonSingleton.cpp", we implement the constructor

```
// NonSingleton.cpp
#include "NonSingleton.h"

NonSingleton::NonSingleton() {
    // Constructor implementation
}
```

Finally, in the main file **Demo.cpp**, we'll include both header files and demonstrate the usage of **Singleton** and **NonSingleton** classes:

```
// Demo.cpp
#include "Singleton.h"
#include "NonSingleton.h"
#include <iostream>

int main() {
    // Creating Singleton instances
    Singleton* singleton1 = Singleton::getInstance();
    Singleton* singleton2 = Singleton::getInstance();

    // Verifying that both addresses are the same
    std::cout << "Singleton instance 1 address: " << singleton1 << std::endl;
    std::cout << "Singleton instance 2 address: " << singleton2 << std::endl;

    // Creating NonSingleton instances
    NonSingleton nonSingleton1;
    NonSingleton nonSingleton2;

    // Verifying that both addresses are different
    std::cout << "NonSingleton instance 1 address: " << &nonSingleton1 << std::endl;
    std::cout << "NonSingleton instance 2 address: " << &nonSingleton2 << std::endl;

    return 0;
}
```

In this example, the **Singleton** class implements the **Singleton** pattern, allowing only one instance of the class to be created. 
The **NonSingleton** class is a regular class that doesn't follow the Singleton pattern and allows multiple instances.

When you run the code, you'll observe that the addresses of singleton1 and singleton2 will be the same, indicating that only one instance is created. 
On the other hand, the addresses of nonSingleton1 and nonSingleton2 will be different, demonstrating that separate instances are created.

The Singleton pattern is useful when you want to ensure that only a single instance of a class exists throughout the program. 
This can be advantageous in scenarios such as managing shared resources, global configurations, or limiting access to a particular object.






















