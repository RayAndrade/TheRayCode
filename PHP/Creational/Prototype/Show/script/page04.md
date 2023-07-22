[home](./page01.md)

[back](./page03.md)

Create class

```
Clown
```

```
public $name;
public $chatchPrase;
```


```
public function __construct($name, Phrase $phrase) {
    $this->name = $name;
    $this->chatchPrase = $phrase;
}
```

Shallow clone

Deep clone

```
public function deepClone() {
    $cloned = clone $this;
    $cloned->chatchPrase = clone $this->chatchPrase;  // clone inner object
    return $cloned;
}
```


[page 5](./page05.md)
