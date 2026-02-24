[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**Context.php**

the main class in the State pattern. 

It holds a reference to the current state and allows clients to trigger state transitions and behaviors.

create class
```
Context
```


add code:
```
private $state;
```

```
public function __construct(State $state)
{
    $this->transitionTo($state);
}
```

The Context allows changing the State object at runtime.
```
public function transitionTo(State $state): void
{
    echo "Context: Transition to " . get_class($state) . ".<br/>";
    $this->state = $state;
    $this->state->setContext($this);
}
```

The Context delegates part of its behavior to the current State object.
```
public function request1(): void
{
    $this->state->handle1();
}
```

```
public function request2(): void
{
    $this->state->handle2();
}
```


[page 4](./page04.md)
