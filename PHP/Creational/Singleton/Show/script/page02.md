[home](./page01.md)

[back](./page01.md)

Create a file named **Singleton.php** that will contain the Singleton *class*:

```
Singleton
```

and add code:

```
private static $instance;
```

This line declares a private static property named $instance. 

Being static, this property is shared across all instances of the class, so there will be only one $instance for the entire application. 

Being private, it can only be accessed from within the class itself.

[page 3](./page03.md)
