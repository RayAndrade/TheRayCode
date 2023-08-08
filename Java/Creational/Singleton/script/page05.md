[home](./page01.md)

[back](./page04.md)

In the main we create a demonstration.
```
        // Obtaining the unique instance of Singleton
Singleton singleton1 = Singleton.getInstance();
Singleton singleton2 = Singleton.getInstance();
```

Next we show the messages

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




[page 6](./page06.md)
