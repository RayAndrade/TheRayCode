Alright, I'll demonstrate a prototype design pattern in C++. I will create a base class called `Prototype`, a derived class called `ConcretePrototype` and another class `DemoClass` which contains the `Prototype`. 

Please note that due to limitations in text format here, I can't provide these in separate .h files but I will divide the code into sections representing each .h file for clarity.

**Prototype.h**

```cpp
#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype
{
public:
    virtual ~Prototype(){}
    virtual Prototype* clone() const = 0;
};

#endif
```
This is the base class `Prototype` with a pure virtual function `clone()` which will be implemented by derived classes.

**ConcretePrototype.h**

```cpp
#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H

#include "Prototype.h"

class ConcretePrototype : public Prototype
{
private:
    int data;

public:
    ConcretePrototype(int d):data(d){}
    ConcretePrototype(const ConcretePrototype& cp): data(cp.data){}
    virtual Prototype* clone() const
    {
        return new ConcretePrototype(*this); 
    }
    int getData(){ return data;}
};

#endif
```
Here, `ConcretePrototype` is derived from `Prototype` and has a member `data`. It overrides the `clone()` method to create and return a copy of itself, which leads to deep cloning. Also, it has a copy constructor which enables deep cloning.

**DemoClass.h**

```cpp
#ifndef DEMOCLASS_H
#define DEMOCLASS_H

#include "ConcretePrototype.h"

class DemoClass
{
private:
    ConcretePrototype* prototype;

public:
    DemoClass(int d):prototype(new ConcretePrototype(d)){}
    DemoClass(const DemoClass& dc): prototype(dc.prototype) {}  // Shallow Copy
    DemoClass& operator=(const DemoClass& dc) // Deep Copy
    {
        if(this != &dc)
        {
            delete prototype;
            prototype = dc.prototype->clone();
        }
        return *this;
    }
    int getData() { return prototype->getData(); }
    ~DemoClass() { delete prototype; }
};

#endif
```
In `DemoClass`, the copy constructor performs a shallow copy of `ConcretePrototype` (which means it only copies the pointer). On the other hand, the copy assignment operator (`operator=`) performs a deep copy by calling `clone()`, ensuring a new copy of `ConcretePrototype` is created.

Now, let's demonstrate the difference between deep and shallow cloning in the `main.cpp`.

**main.cpp**

```cpp
#include <iostream>
#include "DemoClass.h"

int main()
{
    // Creating original object
    DemoClass originalObj(10);
    std::cout << "Original Object's data: " << originalObj.getData() << std::endl;

    // Creating a shallow copy
    DemoClass shallowCopyObj = originalObj;
    std::cout << "Shallow Copy Object's data: " << shallowCopyObj.getData() << std::endl;

    // Creating a deep copy
    DemoClass deepCopyObj(0);
    deepCopyObj = originalObj;
    std::cout << "Deep Copy Object's data: " << deepCopyObj.getData() << std::endl;

    return 0;
}
```
When you run this program, all of the `std::cout` calls will print '10', as the `DemoClass` object `originalObj`, the shallow copy `shallowCopyObj`, and the deep copy `deepCopyObj` are all initially identical. 

However, the difference comes into play when changes are made to the `originalObj` after the copying. The changes will reflect in the `shallowCopyObj` as they both point to the same `ConcretePrototype` object, while the `deepCopyObj` will remain the same because it points to a different `ConcretePrototype` object.
