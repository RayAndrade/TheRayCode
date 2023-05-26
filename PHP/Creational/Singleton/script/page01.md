[home](./page01.md)


create php file

```
Singleton
```

```
class Singleton {  }
```

```
private static ?Singleton $instance = null;
```

```
protected function __construct() { }
```

```
public static function getInstance(): Singleton {   }
```
insert in tp this function

```
if (self::$instance === null)
{
    self::$instance = new static();
}

return self::$instance;
```

add these two stubs

```
private function __clone() {  }

private function __wakeup() {  }
```

[page 2](./page02.md)
