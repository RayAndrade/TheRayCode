Sure! The Singleton pattern is a design pattern that restricts the instantiation of a class to one single instance. It is used to provide a global point of access to the object. Here's an example in Java:

1. **Singleton Class**: This is the main class that follows the Singleton pattern. It contains a static variable of its own class and a private constructor to make sure that no other class can instantiate it.

2. **Program Class**: This is the class where the main method resides, and it's used to demonstrate the Singleton pattern.

### Singleton Class

```java
public class Singleton {
    // Static instance of Singleton, ensures it is eagerly created.
    private static final Singleton instance = new Singleton();

    // Private constructor ensures that no other class can instantiate this class.
    private Singleton() {}

    // Public method to provide access to the instance.
    public static Singleton getInstance() {
        return instance;
    }

    // Example method to show that Singleton is working.
    public void showMessage() {
        System.out.println("Hello, I'm a Singleton!");
    }
}
```

Here, the `getInstance` method is used to access the unique instance of the class. The instance is created eagerly, meaning it is created when the class is loaded. This is thread-safe but might be an unnecessary overhead if the instance is not used.

### Program Class

```java
public class Program {
    public static void main(String[] args) {
        // Obtaining the unique instance of Singleton
        Singleton singleton1 = Singleton.getInstance();
        Singleton singleton2 = Singleton.getInstance();

        // Showing messages from both instances
        singleton1.showMessage();
        singleton2.showMessage();

        // Checking if both references point to the same object
        if (singleton1 == singleton2) {
            System.out.println("Both instances are the same!");
        } else {
            System.out.println("Instances are different!");
        }
    }
}
```

The `Program` class illustrates how you can obtain instances of the `Singleton` class through its `getInstance` method. Since the Singleton pattern is used, both `singleton1` and `singleton2` point to the same instance, and the message "Both instances are the same!" will be printed.

This example demonstrates the basic use of the Singleton pattern, which can be beneficial when exactly one object is needed to coordinate actions across the system, such as a database connection or a logging component.

