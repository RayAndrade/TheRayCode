[home](./page01.md) | [back](./page05.md) | [next](./page07.md)

at the **index.php**

```
include_once ('Context.php');
include_once ('Strategy.php');
include_once ('ConcreteStrategyA.php');
include_once ('ConcreteStrategyB.php');
```

```
$context = new Context(new ConcreteStrategyA);
echo "sorted.<br/>";
$context->doSomeBusinessLogic();
```

```
echo "<br/>";

echo "sorted (reverse).<br/>";
$context->setStrategy(new ConcreteStrategyB());
$context->doSomeBusinessLogic();
```



[page 7](./page07.md)
