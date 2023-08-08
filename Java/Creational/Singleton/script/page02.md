[home](./page01.md)

[back](./page01.md)

We create a Private constructor ensures that no other class can instantiate this class.
```
    // Private constructor ensures that no other class can instantiate this class.
private Singleton() {}
```


Next we add a public method to provide access to the instance.
```
    // Public method to provide access to the instance.
public static Singleton getInstance() {
    return instance;
}

```




[page 3](./page03.md)
