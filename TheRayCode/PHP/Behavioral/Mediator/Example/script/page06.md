[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Concrete Components implement various functionality. 

They don't depend on other components. 

They also don't depend on any concrete mediator classes.

Create class
```
ComponentA
```

```
 extends BaseComponent
```

with
```
public function doA(): void
{
    echo "Component A does A.<br/>";
    $this->mediator->notify($this, "A");
}
```
and
```
public function doB(): void
{
    echo "Component B does B.<br/>";
    $this->mediator->notify($this, "B");
}
```



[page 7](./page07.md)
