[up](../README.md)

**Model.php**:
```php
class Model
{
    public $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function setName($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }
}
```

This class represents a generic `Model` with a property called `name` to store the name of the model. It has setter (`setName()`) and getter (`getName()`) methods for the `name` property. It's a basic encapsulation pattern.


**Vehicle.php**:
```php
require_once 'Model.php';

class Vehicle
{
    public $model;

    public function __construct(Model $model) {
        $this->model = $model;
    }

    public function getModel() {
        return $this->model->getName();
    }
}
```

This class represents a generic `Vehicle`. It has a property `$model` which is an instance of the `Model` class. The `getModel()` method is a shorthand to retrieve the name of the model from the embedded `Model` instance.

**Car.php**:
```php
require_once 'Vehicle.php';

class Car extends Vehicle
{
    public function __clone() {
        $this->model = clone $this->model;
    }
}
```

This class represents a `Car` and extends `Vehicle`. The most important aspect here is the `__clone` method. This method is a magic method in PHP that's called when you use the `clone` keyword on an object.

In this example, when you clone a `Car` object, the `__clone` method ensures that not only the `Car` itself is cloned but also its embedded `$model` property (which is an instance of the `Model` class). This ensures a deep copy of the `Car` object.

**Deep Copy vs. Shallow Copy**:

- **Shallow Copy**: If you make a shallow copy of an object, the new object will reference the same objects as the original. Any changes made to the internal objects of the copied object will be reflected in the original object and vice versa.
  
- **Deep Copy**: A deep copy of an object creates a new instance of the object and all of its non-primitive child objects. This means changes to the copied object's internal objects do not affect the original object's internal objects.

The use of the `clone` keyword inside the `__clone` method ensures a deep copy.

**index.php**:
```php
require_once 'Car.php';

$bmwModel = new Model("BMW");
$car1 = new Car($bmwModel);
$audiModel = new Model("Audi");
$car2 = clone $car1;
$car2->model = $audiModel;

echo "Car 1 Model: " . $car1->getModel() . "<br/>"; // Outputs: "Car 1 Model: BMW"
echo "Car 2 Model: " . $car2->getModel() . "<br/>"; // Outputs: "Car 2 Model: Audi"
```

This script ties everything together:

1. A `Model` object with the name "BMW" is created and used to instantiate a `Car` object (`$car1`).
2. Another `Model` object with the name "Audi" is created.
3. A deep copy of `$car1` is made using `clone` and stored in `$car2`.
4. The model of `$car2` is changed to "Audi".
5. Finally, the models of both cars are printed.

The Prototype Design Pattern involves creating a prototype object and then making copies of it. This example demonstrates it by using the `clone` keyword for the deep copying part of the pattern.


