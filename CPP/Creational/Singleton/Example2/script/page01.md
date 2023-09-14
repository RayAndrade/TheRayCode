[home](./page01.md)

### 1. OnlyOne Class:

**OnlyOne.h:**

```cpp
OnlyOne
```

```
class OnlyOne {  };
```

A Private Constructor to prevent external instantiation

```
static OnlyOne* instance;
```

Delete copy constructor and assignment operator to avoid duplication

```cpp

```

and Declare a private static instance of the same class

```cpp
private:
    OnlyOne() {}
    static OnlyOne* instance;
```

Delete copy constructor and assignment operator to avoid duplication
```cpp
public:
    OnlyOne(const OnlyOne&) = delete;
    OnlyOne& operator=(const OnlyOne&) = delete;
```

Static method to access the unique OnlyOne instance

```
static OnlyOne* getInstance();
```

```
void demoMethod();
```

```
static OnlyOne* getInstance();
```

Some business logic method
```
void demoMethod();
```

[page 2](./page02.md)
