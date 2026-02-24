[home](./page01.md) | [back](./page07.md) | [next](./page09.md)

Let's put this altogether in the index.php we first need to have our includes at the top.


```php
include_once ('Mediator.php');
include_once('SolidMediator.php');
include_once ('BaseComponent.php');
include_once('ComponentA.php');
include_once('ComponentB.php');
```

Now the rest of the demo
```php
$cA = new ComponentA;
$cB = new ComponentB;
$mediator = new SolidMediator($cA, $cB);
```
and
```
echo "Client triggers operation A.<br/>";
$cA->doA();
```
and
```
echo "<br/>";
echo "Client triggers operation B.<br/>";
$cB->doD();
```


[page 9](./page09.md)
