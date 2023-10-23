[home](./page01.md)

[back](./page03.md)

```
include 'Singleton.php';
include 'SomeClass.php';
```

Trying to get two instances of Singleton

```
$instance1 = Singleton::getInstance();
$instance2 = Singleton::getInstance();
```

Both instances are the same

```
if ($instance1 === $instance2) {
    echo "Both instances are the same!<br>";
}
```

Demonstrating the use of Singleton in another class
```
$obj = new SomeClass();
$obj->doSomething();
```


[page 5](./page05.md)
