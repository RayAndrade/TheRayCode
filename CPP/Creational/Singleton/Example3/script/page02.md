[home](./page01.md)

[back](./page01.md)

**Singleton Class**

make the **Singleton.h:**
```
Singleton
```

```
class Singleton {  };
```

Private Constructor to prevent external instantiation
```
private:
    Singleton() {}
```

Delete copy constructor and assignment operator to avoid duplication

```
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
```

Static method to access the unique Singleton instance

```
static Singleton* getInstance();
```
Some business logic method

```
void demoMethod();
```


[page 3](./page03.md)
