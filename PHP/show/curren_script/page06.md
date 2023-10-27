[home](./page01.md)

[back](./page05.md)

Create class
```
ErrorLogger
```

add to the top
```
include_once "AbstractLogger.php";
```

and
```
 extends AbstractLogger 
```


with
```
public function __construct() {
    $this->level = 3;
}
```

and
```
protected function write($message) {
    echo "Error Logger: " . $message . "<br>";
}
```


[page 7](./page07.md)
