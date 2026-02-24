[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

Create **class BaseComponent**

```
BaseComponent
```
add code

**1 of** protected varable mediator
```
protected $mediator;
```

**2 of** construct
```
public function __construct(Mediator $mediator = null)
{
    $this->mediator = $mediator;
}
```

**3 of** **function setMediator**
```
public function setMediator(Mediator $mediator): void
{
   $this->mediator = $mediator;
}
```


[page 4](./page04.md)
