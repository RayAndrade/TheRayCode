[home](./page01.md)

[back](./page04.md)

This method is the primary way to get the singleton instance. 

It checks if the $instance is null (i.e., not created yet). 

If it is, it creates a new instance and stores it in the $instance property. 

Then, it returns that instance. All subsequent calls to getInstance() will return the same object, adhering to the Singleton pattern.


```
public function someMethod() {
    return "I'm a singleton!";
}
```

This is just an example method that you might find in your Singleton class. 

It can be replaced with any functionality that your singleton needs to perform.

[page 6](./page06.md)
