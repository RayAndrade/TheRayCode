[home](./page01.md)

[back](./page01.md)


2. **Program Class**: This is the class where the main method resides, and it's used to demonstrate the Singleton pattern.

Obtaining the unique instance of Singleton
```
        // Obtaining the unique instance of Singleton
Singleton singleton1 = Singleton.getInstance();
Singleton singleton2 = Singleton.getInstance();
```

Showing messages from both instances
```
        // Showing messages from both instances
singleton1.showMessage();
singleton2.showMessage();
```

Checking if both references point to the same object

```
        // Checking if both references point to the same object
if (singleton1 == singleton2) {
    System.out.println("Both instances are the same!");
} else {
     System.out.println("Instances are different!");
}
```


The `Program` class illustrates how you can obtain instances of the `Singleton` class through its `getInstance` method. Since the Singleton pattern is used, both `singleton1` and `singleton2` point to the same instance, and the message "Both instances are the same!" will be printed.

This example demonstrates the basic use of the Singleton pattern, which can be beneficial when exactly one object is needed to coordinate actions across the system, such as a database connection or a logging component.


[page 3](./page03.md)
