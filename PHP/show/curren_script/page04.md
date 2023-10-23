[home](./page01.md)

[back](./page03.md)


Deep clone

```
public function deepClone() {
    $cloned = clone $this;
    $cloned->chatchPrase = clone $this->chatchPrase;  // clone inner object
    return $cloned;
}
```

Please note that Prase is a prameter that is being passed in..


[page 5](./page05.md)
