[home](./page01.md)

[back](./page03.md)

We add a public static method.

```
public static function getInstance() {
    if (null === static::$instance) {
        static::$instance = new static();
    }

    return static::$instance;
}
```



[page 5](./page05.md)
