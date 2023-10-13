[home](./page01.md)

[back](./page06.md)

let's now do a demo in the index.php page

we start with includes

```
include 'Component.php';
include 'ConcreteComponent.php';
include 'Decorator.php';
include 'MilkDecorator.php';
include 'SugarDecorator.php';

use TheRayCode\Decorator\ConcreteComponent;
use TheRayCode\Decorator\MilkDecorator;
use TheRayCode\Decorator\SugarDecorator;
```
and uses

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

[page 8](./page08.md)
