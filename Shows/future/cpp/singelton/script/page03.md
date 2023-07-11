[home](./page01.md)

[back](./page02.md)


**Singleton.cpp**

create a **.cpp** file

```
Singleton
```
it will have the following code

```
Singleton* Singleton::instance = nullptr;

Singleton::Singleton() {
    // Private constructor
}

Singleton* Singleton::getInstance() {
    if (instance == nullptr) {
        instance = new Singleton();
    }
    return instance;
}

void Singleton::someMethod() {
    // Implementation of the method
}
```

we define the implementation of the **Singleton class**. 

The **getInstance() method** checks if the instance is null and creates a new instance if it is. 

The **someMethod()** implementation can be any functionality you desire.


[page 4](./page04.md)
