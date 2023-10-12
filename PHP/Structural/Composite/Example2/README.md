The Composite pattern lets you compose objects into tree structures to represent part-whole hierarchies. Composite lets clients treat individual objects and compositions uniformly.

Let's illustrate this with a classic example of a graphic system where different shapes (like circles, squares, etc.) can be combined to form complex shapes.

**Directory Structure**
```
/CompositePattern
    - index.php
    - Component.php
    - Composite.php
    - Leaf.php
```

**1. Component.php**

This is the abstract class which declares the interface for objects in the composition.

```php
<?php

abstract class Component {
    protected $name;

    public function __construct(string $name) {
        $this->name = $name;
    }

    abstract public function draw(): void;

    // We can add/remove child components only for Composite objects. 
    // So, these methods should throw an exception here.
    public function add(Component $component): void {
        throw new Exception("Cannot add to a leaf");
    }

    public function remove(Component $component): void {
        throw new Exception("Cannot remove from a leaf");
    }
}

?>
```

**2. Leaf.php**

This represents leaf objects in the composition. A leaf has no children.

```php
<?php

include_once 'Component.php';

class Leaf extends Component {
    public function draw(): void {
        echo "Drawing " . $this->name . "<br>";
    }
}

?>
```

**3. Composite.php**

This defines behavior for components having children and to store child components.

```php
<?php

include_once 'Component.php';

class Composite extends Component {
    private $children = [];

    public function add(Component $component): void {
        array_push($this->children, $component);
    }

    public function remove(Component $component): void {
        $this->children = array_filter($this->children, function ($child) use ($component) {
            return $child !== $component;
        });
    }

    public function draw(): void {
        echo "Drawing " . $this->name . "<br>";
        foreach ($this->children as $child) {
            $child->draw();
        }
    }
}

?>
```

**4. index.php**

This will demonstrate how the pattern works.

```php
<?php

include_once 'Leaf.php';
include_once 'Composite.php';

// Creating individual components
$circle = new Leaf("Circle");
$square = new Leaf("Square");

// Creating composite components
$compositeShape1 = new Composite("CompositeShape1");
$compositeShape2 = new Composite("CompositeShape2");

// Adding individual components to composite
$compositeShape1->add($circle);
$compositeShape1->add($square);

// Creating a more complex shape by adding a composite to another composite
$compositeShape2->add($compositeShape1);

// Drawing the shapes
echo "Drawing Individual Components:<br>";
$circle->draw();
$square->draw();

echo "<br>Drawing Composite Shapes:<br>";
$compositeShape1->draw();
$compositeShape2->draw();

?>
```

**Expected Output in Browser**

```
Drawing Individual Components:
Drawing Circle
Drawing Square

Drawing Composite Shapes:
Drawing CompositeShape1
Drawing Circle
Drawing Square

Drawing CompositeShape2
Drawing CompositeShape1
Drawing Circle
Drawing Square
```

This design pattern allows you to work with complex tree structures more easily by allowing you to treat individual objects (Leaf) and compositions of objects (Composite) uniformly.
