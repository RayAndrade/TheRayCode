[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

Concrete Components implement various functionality. They don't depend on other components. 

They also don't depend on any concrete mediator classes.

```
SolidMediator
```

```
 implements Mediator
```

add code:
```
private $componentA;
private $componentB;
```
and for the **construct** function
```
public function __construct(ComponentA $cA, ComponentB $cB)
{
    $this->componentA = $cA;
    $this->componentA->setMediator($this);
    $this->componentB = $cB;
    $this->componentB->setMediator($this);
}
```

Let's put some code in the **notify** function

```
if ($event == "A") {
    echo "Mediator reacts on A and triggers following operations:<br/>";
    $this->componentB->doC();
}

if ($event == "D") {
    echo "Mediator reacts on D and triggers following operations:<br/>";
    $this->componentA->doB();
    $this->componentB->doC();
}
```
    
[page 6](./page06.md)
