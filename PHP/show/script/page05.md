[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

A concrete implementation of the `Observer` interface.
```
ConcreteObserver
```

```
include 'Observer.php';
```


```
 implements Observer
```

Auto gen the **update**


add
```
private $name;

public function __construct($name) {
    $this->name = $name;
}
```

and for the  **update** function
```
echo "Observer {$this->name} received message: {$message}<br>";
```


[page 6](./page06.md)
