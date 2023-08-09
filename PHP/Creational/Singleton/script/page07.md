[home](./page01.md)

At **index.php**
This file demonstrates how to use the Singleton class by including it and obtaining instances through the getInstance() method. 

It prints a message if the two instances are the same, confirming the implementation of the Singleton pattern.

```
include_once 'Singleton.php';

$instance1 = Singleton::getInstance();
$instance2 = Singleton::getInstance();

if ($instance1 === $instance2) {
    echo "Both instances are the same.\n";
    echo $instance1->someMethod(); // Output: I'm a singleton!
}
```

When you run the index.php file, you will see the output indicating that both instances are the same, meaning that the Singleton pattern has been successfully implemented.

Keep in mind that the Singleton pattern is sometimes considered an anti-pattern because it can make code more difficult to test and can introduce global state into an application. Consider carefully whether it's the best solution for your particular use case.


[page 8](./page08.md)
