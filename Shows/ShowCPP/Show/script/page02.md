[home](./page01.md)

[back](./page01.md)

Let's start with the .h files:

**Singleton.h**

```
Singleton
```

add a class structure

```
class Singleton {  };
```

add code

```
private:
    static Singleton* instance;
    Singleton();  // Private constructor to prevent direct instantiation

public:
    static Singleton* getInstance();
    void someMethod();
```
In the **Singleton.h** file, we define the **Singleton** class. 

It has a **private** static member instance that holds **the single** instance of the class. 

The constructor is marked as private **to prevent** direct instantiation. 

We provide a **static getInstance()** method to retrieve the instance and a **someMethod()** for demonstration purposes.


[page 3](./page03.md)
