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

[page 2](./page02.md)
