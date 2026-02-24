[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

**ConcreteStateA.php & ConcreteStateB.php (The Concrete States)**

```
ConcreteStateA
```

```
 extends State
```

for **handle1**
```
echo "ConcreteStateA handles request1.<br/>";
echo "ConcreteStateA wants to change the state of the context.<br/>";
$this->context->transitionTo(new ConcreteStateB);
```

for **handle2**
```
echo "ConcreteStateA handles request2.<br/>";
```

[page 5](./page05.md)
