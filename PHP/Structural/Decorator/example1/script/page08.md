[home](./page01.md)

[back](./page07.md)

```
include 'Component.php';
include 'ConcreteComponent.php';
include 'Decorator.php';
include 'MilkDecorator.php';
include 'SugarDecorator.php';
```

```
use TheRayCode\Decorator\ConcreteComponent;
use TheRayCode\Decorator\MilkDecorator;
use TheRayCode\Decorator\SugarDecorator;
```

```
$coffee = new ConcreteComponent();
echo "Description: " . $coffee->operation() . "<br>";
```

```
$milkCoffee = new MilkDecorator($coffee);
echo "Description: " . $milkCoffee->operation() . "<br>";
```

```
$sugarMilkCoffee = new SugarDecorator($milkCoffee);
echo "Description: " . $sugarMilkCoffee->operation() . "<br>";
```

run


page08

[page 9](./page09.md)