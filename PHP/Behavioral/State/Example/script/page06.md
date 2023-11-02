[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

Now at **index.php (Client Code)**


```
include_once ('Context.php');
include_once ('State.php');
include_once ('ConcreteStateA.php');
include_once ('ConcreteStateB.php');
```

The client code.

```
$context = new Context(new ConcreteStateA);
$context->request1();
$context->request2();
```



[page 7](./page07.md)
