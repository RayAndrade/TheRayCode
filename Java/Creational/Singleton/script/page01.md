[home](./page01.md)

The Singleton pattern is a design pattern that restricts the instantiation of a class to one single instance. 

It is used to provide a global point of access to the object. Here's an example in Java:

1. **Singleton Class**: This is the main class that follows the Singleton pattern. It contains a static variable of its own class and a private constructor to make sure that no other class can instantiate it.

Create **class** 

```
Singleton
```


add code

Static instance of Singleton, ensures it is eagerly created.

```
     // Static instance of Singleton, ensures it is eagerly created.
private static final Singleton instance = new Singleton();

```

Private constructor ensures that no other class can instantiate this class.
```
    // Private constructor ensures that no other class can instantiate this class.
private Singleton() {}
```

Public method to provide access to the instance.
```
    // Public method to provide access to the instance.
public static Singleton getInstance() {
    return instance;
}

```

Example method to show that Singleton is working.
```
    // Example method to show that Singleton is working.
public void showMessage() {
    System.out.println("Hello, I'm a Singleton!");
}
```

Here, the **getInstance** method is used to access the unique instance of the class. The instance is created *eagerly*, meaning it is created when the class is loaded. 

This is thread-safe but might be an unnecessary overhead if the instance is not used.

[page 2](./page02.md)
