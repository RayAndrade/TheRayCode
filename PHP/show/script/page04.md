[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

**class SolidMediator**

```
 implements Mediator
```

add code for private local varables
```
private $componentA;
private $componentB;
```

for construct we set this to :
```
public function __construct(ComponentA $cA, ComponentB $cB)
{
    $this->componentA = $cA;
    $this->componentA->setMediator($this);
    $this->componentB = $cB;
    $this->componentB->setMediator($this);
}
```

for the **notify** function we check the value of **event**
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


[page 5](./page05.md)
