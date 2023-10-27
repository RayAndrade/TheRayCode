[home](./page01.md)

[back](./page04.md)

crate **class**

```
DebugLogger
```

add to the top
```
include_once "AbstractLogger.php";
```

Extend the **DebugLogger** with
```
 extends AbstractLogger
```
add code:
```
public function __construct() {
    $this->level = 2;
}
```

and

```
protected function write($message) {
    echo "Debug Logger: " . $message . "<br>";
}
```



[page 6](./page06.md)
