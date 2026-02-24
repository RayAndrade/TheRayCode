The Bridge pattern is a structural design pattern used in software engineering that allows both abstraction and implementation to exist independently of each other. The bridge pattern involves an interface, an abstraction, and an implementation, allowing the two to vary independently.

Let's create a simple example to demonstrate the Bridge Pattern in PHP. Suppose we have a `Shape` interface with a `Color` implementation. Shapes and Colors can vary independently.

Here's the order and explanation of creating the classes:

1. **ColorInterface.php**: Define the `Color` interface which will be our Implementor in the bridge pattern.

2. **RedColor.php and GreenColor.php**: Implement `ColorInterface` for concrete `Color` classes which will serve as ConcreteImplementors.

3. **Shape.php**: Define the `Shape` abstract class which will act as the Abstraction in the pattern.

4. **Circle.php and Square.php**: Implement `Shape` for concrete shape classes which will serve as RefinedAbstractions.

5. **index.php**: Instantiate the shape objects and set their colors. Display these to the user in a well-formatted manner.

### 1. ColorInterface.php

```php
<?php
// Implementor
interface ColorInterface {
    public function applyColor(): string;
}
```

### 2. RedColor.php

```php
<?php
require_once('ColorInterface.php');

// ConcreteImplementor
class RedColor implements ColorInterface {
    public function applyColor(): string {
        return "Red";
    }
}
```

### 2.1 GreenColor.php

```php
<?php
require_once('ColorInterface.php');

// ConcreteImplementor
class GreenColor implements ColorInterface {
    public function applyColor(): string {
        return "Green";
    }
}
```

### 3. Shape.php

```php
<?php
require_once('ColorInterface.php');

// Abstraction
abstract class Shape {
    protected ColorInterface $color;

    public function __construct(ColorInterface $color) {
        $this->color = $color;
    }

    abstract public function draw(): string;
}
```

### 4. Circle.php

```php
<?php
require_once('Shape.php');

// RefinedAbstraction
class Circle extends Shape {
    public function draw(): string {
        return "Drawing a Circle in " . $this->color->applyColor() . " color.";
    }
}
```

### 4.1 Square.php

```php
<?php
require_once('Shape.php');

// RefinedAbstraction
class Square extends Shape {
    public function draw(): string {
        return "Drawing a Square in " . $this->color->applyColor() . " color.";
    }
}
```

### 5. index.php

```php
<?php
require_once('RedColor.php');
require_once('GreenColor.php');
require_once('Circle.php');
require_once('Square.php');

$red = new RedColor();
$green = new GreenColor();

$redCircle = new Circle($red);
$greenSquare = new Square($green);

echo "<h1>Shapes Drawing</h1>";
echo "<p>{$redCircle->draw()}</p>";
echo "<p>{$greenSquare->draw()}</p>";
```

### Explanation:
1. **ColorInterface**: A common interface for all colors to ensure they implement `applyColor` method.
2. **RedColor** and **GreenColor**: Implement the `ColorInterface` and define the `applyColor` method.
3. **Shape**: Abstract class that maintains a reference to a `Color` object and contains an abstract method `draw`.
4. **Circle** and **Square**: Implement the `Shape` abstraction, they contain methods to interact with the color implementations.
5. **index.php**: This will instantiate concrete implementations of colors and shapes and bridge them together. It outputs the shapes and their colors to the browser in a formatted manner.

### Browser Output:
In the browser, when you run `index.php`, you should see:
```
Shapes Drawing

Drawing a Circle in Red color.
Drawing a Square in Green color.
```

### Note:
Ensure that all files are in the same directory or adjust the `require_once` paths accordingly if you organize them into separate folders.
