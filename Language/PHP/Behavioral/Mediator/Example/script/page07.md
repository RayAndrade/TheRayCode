[home](./page01.md) | [back](./page06.md) | [next](./page08.md)

Let's create another component we call ComponentB
```
ComponentB
```

```
 extends BaseComponent
```

```
public function doC(): void
{
    echo "Component A does C.<br/>";
    $this->mediator->notify($this, "C");
}
```
and
```
public function doD(): void
{
    echo "Component B does D.<br/>";
    $this->mediator->notify($this, "D");
}
```

[page 8](./page08.md)
