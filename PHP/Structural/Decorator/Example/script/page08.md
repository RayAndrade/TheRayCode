[home](./page01.md)

[back](./page07.md)

```
include 'Component.php';
include 'ConcreteComponent.php';
include 'Decorator.php';
include 'MilkDecorator.php';
include 'SugarDecorator.php';
```

**1:3**
```
$coffee = new ConcreteComponent();
echo "Description: " . $coffee->operation() . "<br>";
```
**2:3**
```
$milkCoffee = new MilkDecorator($coffee);
echo "Description: " . $milkCoffee->operation() . "<br>";
```
**3:3**
```
$sugarMilkCoffee = new SugarDecorator($milkCoffee);
echo "Description: " . $sugarMilkCoffee->operation() . "<br>";
```

**run**


page08

[page 9](./page09.md)
