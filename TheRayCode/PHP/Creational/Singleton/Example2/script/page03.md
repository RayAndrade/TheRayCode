[home](./page01.md)

[back](./page02.md)


Next we add

```
private function __construct() {
    // private to prevent instance creation
}
```

The constructor is a method that gets called when you create a new object. 

By making the constructor private, it prevents code outside of the class from instantiating objects directly. 

This is essential for the Singleton pattern to ensure there's only one instance.



[page 4](./page04.md)
