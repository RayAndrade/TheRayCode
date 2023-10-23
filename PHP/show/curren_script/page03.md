[home](./page01.md)

[back](./page02.md)


Deep clone

```
public function deepClone() {
    $cloned = clone $this;
    $cloned->chatchPrase = clone $this->chatchPrase;  // clone inner object
    return $cloned;
}
```

Please note that Prase is a prameter that is being passed in..


[page 4](./page04.md)
