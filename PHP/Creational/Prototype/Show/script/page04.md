[home](./page01.md)

[back](./page03.md)

Create class

```
Clown
```

```
public $name;
public $nose;
```


```
public function __construct($name, Nose $nose) {
    $this->name = $name;
    $this->nose = $nose;
}
```

Shallow clone

```
public function __construct($name, Nose $nose) {
    $this->name = $name;
    $this->nose = $nose;
}
```

Deep clone

```
public function deepClone() {
    $cloned = clone $this;
    $cloned->nose = clone $this->nose;  // clone inner object
    return $cloned;
}
```


[page 5](./page05.md)
