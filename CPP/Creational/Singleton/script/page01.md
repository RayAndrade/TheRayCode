[home](./page01.md)

The Singleton design pattern ensures that a class has only one instance and provides a global point of access to it. Below is a basic example:

The Singleton class is defined in Singleton.h. It has a private constructor, which ensures that the class cannot be directly instantiated. The copy constructor and assignment operator are deleted to prevent copying.

```
Singleton
```

```
Singleton {  };
```

```
public:
    // Delete copy constructor and assignment operator
    Singleton(Singleton &other) = delete;
    void operator=(const Singleton &) = delete;

    static Singleton* getInstance();
```


```
private:
    Singleton() {}

    static Singleton* instance;
```

[page 2](./page02.md)
