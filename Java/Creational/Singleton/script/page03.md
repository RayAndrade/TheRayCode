[home](./page01.md)

[back](./page02.md)


A Example method to SHOW that Singleton is working.
```
    // Example method to show that Singleton is working.
public void showMessage() {
    System.out.println("Hello, I'm a Singleton!");
}
```

Here, the **getInstance** method is used to access the unique instance of the class. The instance is created *eagerly*, meaning it is created when the class is loaded. 

This is thread-safe but might be an unnecessary overhead if the instance is not used.




[next](./page04.md)
