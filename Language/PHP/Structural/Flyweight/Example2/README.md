[up](../README.md)


The Flyweight design pattern is primarily used to reduce the number of objects created and to decrease memory footprint and increase performance. This type of design pattern comes under structural patterns as this pattern provides ways to decrease object count thus improving the object structure of application.

In this example, we'll implement a simple Shape rendering scenario where each type of shape will be a Flyweight.

1. First, create the `ShapeInterface.php` file, which will be implemented by the ConcreteFlyweight objects.

`ShapeInterface.php`
```php
<?php
interface ShapeInterface {
    public function draw(): string;
}
```
Explanation: `ShapeInterface` is a contract for our Flyweights, ensuring they implement the `draw` method.

---

2. Next, create the `Shape.php` file, which represents the Flyweight class.

`Shape.php`
```php
<?php
require_once 'ShapeInterface.php';

class Shape implements ShapeInterface {
    private string $type;

    public function __construct(string $type) {
        $this->type = $type;
    }

    public function draw(): string {
        return "Drawing a " . $this->type;
    }
}
```
Explanation: `Shape` is a concrete Flyweight. Instances of this class will be shared and hold the intrinsic state, the `type` in this case.

---

3. Then, create the `ShapeFactory.php` file. This is where the Flyweight objects are cached.

`ShapeFactory.php`
```php
<?php
require_once 'Shape.php';

class ShapeFactory {
    private array $shapeMap = [];

    public function getShape(string $shapeType): Shape {
        if (!isset($this->shapeMap[$shapeType])) {
            $this->shapeMap[$shapeType] = new Shape($shapeType);
            echo "Creating new shape of type: " . $shapeType . "<br>";
        }
        return $this->shapeMap[$shapeType];
    }
}
```
Explanation: `ShapeFactory` generates `Shape` objects, storing an existing instance in `$shapeMap` to ensure that only one object gets created for each type of shape. This class demonstrates the Flyweight pattern's memory-saving capabilities.

---

4. Finally, create `index.php` to utilize these classes.

`index.php`
```php
<?php
require_once 'ShapeFactory.php';

$shapeTypes = ["Circle", "Square", "Rectangle"];
$colors = ["Red", "Green", "Blue"];
$factory = new ShapeFactory();

for ($i = 0; $i < 10; $i++) {
    $randomShape = $shapeTypes[array_rand($shapeTypes)];
    $shape = $factory->getShape($randomShape);
    $result = $shape->draw();
    echo $result . " in color " . $colors[array_rand($colors)] . "<br>";
}
```
Explanation: In `index.php`, we create several shapes of random types and colors, demonstrating that the `ShapeFactory` only creates a new `Shape` object when a shape of a new type is requested. The `draw` function output is appended with a random color to represent an extrinsic state that is not stored within the Flyweight objects.

---

**Order of Creation:**
1. `ShapeInterface.php`: Define the interface.
2. `Shape.php`: Implement the Flyweight object.
3. `ShapeFactory.php`: Implement the factory to create and manage Flyweight objects.
4. `index.php`: Utilize the Flyweights in the client code.

**Browser Output:**
When you open `index.php` in your browser, you should see messages indicating when a shape is created and a list of drawn shapes with random colors. Due to the nature of the Flyweight pattern, you'll notice that each unique shape type is only created once, regardless of how many times it's requested.

Remember, the actual visual representation of the shapes is not implemented - the script only simulates the drawing as text output for demonstration purposes. The colors are randomly assigned at each draw to demonstrate that they are an extrinsic state, not stored within the Flyweight objects.
