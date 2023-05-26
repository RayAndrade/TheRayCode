[home](./page01.md)

[back](./page02.md)


in the index.php page

we need to
```
require 'Car.php';
```


define a  car and get info

```
$car1 = new Car('Tesla Model 3', 'Red', 2020);
echo $car1->getInfo();
```

do another car
```
echo "<br/>\n";
$car2 = $car1->clone();
echo $car2->getInfo();
```
Now let's modify some property in car2, but car1 should not be affected.

```
echo "<br/>\n";
$car2->color = 'Blue';
echo $car1->getInfo();
echo "<br/>\n";
echo $car2->getInfo();
```



[page 4](./page04.md)
