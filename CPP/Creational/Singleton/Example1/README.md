Here’s the **correct file structure** with `.h` header files for `Singleton` and `PlainClass`, and a separate `.cpp` file for `main()`. This adheres to best practices for **separating declarations and implementations**.

---

### **1. `Singleton.h` (Singleton Class Header)**
```cpp
#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>

// Singleton class definition
class Singleton {
private:
    static Singleton* _instance;  // Static instance pointer

    // Private constructor to prevent direct instantiation
    Singleton();

public:
    // Static method to get the single instance
    static Singleton* Instance();

    // Example method to demonstrate functionality
    void ShowMessage();

    // Delete copy constructor and assignment operator
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
};

#endif // SINGLETON_H
```

---

### **2. `Singleton.cpp` (Singleton Class Implementation)**
```cpp
#include "Singleton.h"

// Initialize the static member
Singleton* Singleton::_instance = nullptr;

// Private constructor
Singleton::Singleton() {
    std::cout << "Singleton instance created." << std::endl;
}

// Static method to return the single instance
Singleton* Singleton::Instance() {
    if (_instance == nullptr) {
        _instance = new Singleton();
    }
    return _instance;
}

// Example method implementation
void Singleton::ShowMessage() {
    std::cout << "Hello from Singleton!" << std::endl;
}
```

---

### **3. `PlainClass.h` (Regular Class Header)**
```cpp
#ifndef PLAINCLASS_H
#define PLAINCLASS_H

#include <iostream>

// Plain class definition
class PlainClass {
public:
    PlainClass();  // Constructor
    void ShowMessage();  // Example method
};

#endif // PLAINCLASS_H
```

---

### **4. `PlainClass.cpp` (Regular Class Implementation)**
```cpp
#include "PlainClass.h"

// Constructor implementation
PlainClass::PlainClass() {
    std::cout << "PlainClass instance created." << std::endl;
}

// Example method implementation
void PlainClass::ShowMessage() {
    std::cout << "Hello from PlainClass!" << std::endl;
}
```

---

### **5. `main.cpp` (Main Program)**
```cpp
#include "Singleton.h"
#include "PlainClass.h"

int main() {
    // Get the first instance of Singleton
    Singleton* singleton1 = Singleton::Instance();
    singleton1->ShowMessage();

    // Get another instance of Singleton
    Singleton* singleton2 = Singleton::Instance();

    // Verify that both Singleton instances are the same
    if (singleton1 == singleton2) {
        std::cout << "Both Singleton instances are the SAME object." << std::endl;
    } else {
        std::cout << "ERROR: Singleton instances are different! (This should not happen)" << std::endl;
    }

    std::cout << "\n--- Creating PlainClass instances ---" << std::endl;

    // Create two separate instances of PlainClass
    PlainClass* plain1 = new PlainClass();
    PlainClass* plain2 = new PlainClass();

    // Verify that they are different objects
    if (plain1 == plain2) {
        std::cout << "ERROR: PlainClass instances are the same! (This should not happen)" << std::endl;
    } else {
        std::cout << "PlainClass instances are DIFFERENT objects." << std::endl;
    }

    // Clean up allocated memory
    delete plain1;
    delete plain2;

    return 0;
}
```

---

### **File Structure**
```
/project-folder
│── Singleton.h
│── Singleton.cpp
│── PlainClass.h
│── PlainClass.cpp
│── main.cpp
```

---

### **Compilation (Linux/macOS)**
Use `g++` to compile everything together:
```sh
g++ -o main main.cpp Singleton.cpp PlainClass.cpp
./main
```

### **Compilation (Windows - MinGW)**
```sh
g++ -o main.exe main.cpp Singleton.cpp PlainClass.cpp
main.exe
```

---

### **Expected Output**
```
Singleton instance created.
Hello from Singleton!
Both Singleton instances are the SAME object.

--- Creating PlainClass instances ---
PlainClass instance created.
PlainClass instance created.
PlainClass instances are DIFFERENT objects.
```

This setup follows **proper C++ best practices**:
✅ **Encapsulation**: Each class has a separate header and implementation file.  
✅ **Singleton Works Correctly**: It returns the **same instance**.  
✅ **PlainClass Works Correctly**: Each `new` creates **distinct instances**.  

This should now work exactly as expected! 🚀 Let me know if you need any modifications. 😊
