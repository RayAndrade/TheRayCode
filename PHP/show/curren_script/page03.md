[home](./page01.md)

[back](./page02.md)


create **abstract class**
```
AbstractLogger
```

make
```
abstract
```

add at the top to
```
include_once "Logger.php";
```

add local varables:
```
protected $level;
protected $nextLogger;
```

add **setNext**
```
public function setNext(Logger $logger) {
    $this->nextLogger = $logger;
    return $this;
}
```

add the funcion to **logMessage**
```
public function logMessage($level, $message) {
    if($this->level <= $level) {
        $this->write($message);
    }
    if($this->nextLogger != null) {
        $this->nextLogger->logMessage($level, $message);
    }
}
```

add the **abstract function**
```
protected abstract function write($message);
```


[page 4](./page04.md)
