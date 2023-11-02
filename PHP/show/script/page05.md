[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

class:
```
ConcreteStateB
```

```
 extends State
```

for **handle1**
```
echo "ConcreteStateB handles request1.<br/>";
```
for **handle2**
```
echo "ConcreteStateB handles request2.<br/>";
echo "ConcreteStateB wants to change the state of the context.<br/>";
$this->context->transitionTo(new ConcreteStateA);
```


[page 6](./page06.md)
