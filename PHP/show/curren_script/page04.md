[home](./page01.md)

[back](./page03.md)

Create **class**

```
InfoLogger
```

add to the top
```
include_once "AbstractLogger.php";
```

extend with InfoLogger
```
 extends AbstractLogger
```


add
```
public function __construct() {
    $this->level = 1;
}
```

and

```
protected function write($message) {
   echo "Info Logger: " . $message . "<br>";
}
```



[page 5](./page05.md)
