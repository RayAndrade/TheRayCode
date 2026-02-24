[up](../README.md)

Alright, let's dive into the Flyweight design pattern using PHP 8.1.

**Flyweight Pattern**:
The Flyweight pattern is primarily used to reduce the number of objects created, decrease the memory footprint, and increase performance. The pattern shares as much data as possible with similar objects, storing common data externally and referencing them, rather than storing them in each object.

**Use Case**:
Let's say we are developing an application to display a forest. Instead of creating individual tree objects for each tree in the forest, we can use the Flyweight pattern to reduce the number of objects created by sharing common data.

**Implementation**:
1. **TreeType.php**: Represents the shared parts of the tree (like name, color, texture).
2. **Tree.php**: Represents an individual tree with its position and reference to the shared TreeType.
3. **TreeFactory.php**: Provides a method to get a tree type; creates a new one if it doesn't exist or returns an existing one.
4. **Forest.php**: Represents the forest containing multiple trees.
5. **index.php**: Demonstrates the usage of these classes.

---

**1. TreeType.php**:

```php
<?php

class TreeType {
    private string $name;
    private string $color;
    private string $texture;

    public function __construct(string $name, string $color, string $texture) {
        $this->name = $name;
        $this->color = $color;
        $this->texture = $texture;
    }

    public function render(int $x, int $y): string {
        return "Rendered a $this->name at ($x, $y) with color $this->color and texture $this->texture.<br>";
    }
}

?>
```

Explanation: `TreeType` has three properties: `name`, `color`, and `texture`. The `render` method is used to demonstrate how this shared tree type would be displayed.

---

**2. Tree.php**:

```php
<?php

class Tree {
    private int $x;
    private int $y;
    private TreeType $type;

    public function __construct(int $x, int $y, TreeType $type) {
        $this->x = $x;
        $this->y = $y;
        $this->type = $type;
    }

    public function render(): string {
        return $this->type->render($this->x, $this->y);
    }
}

?>
```

Explanation: `Tree` has properties for its position (`x` and `y`) and a reference to its shared `TreeType`.

---

**3. TreeFactory.php**:

```php
<?php

require_once 'TreeType.php';

class TreeFactory {
    private array $treeTypes = [];

    public function getTreeType(string $name, string $color, string $texture): TreeType {
        $key = md5($name . $color . $texture);

        if (!isset($this->treeTypes[$key])) {
            $this->treeTypes[$key] = new TreeType($name, $color, $texture);
        }

        return $this->treeTypes[$key];
    }
}

?>
```

Explanation: `TreeFactory` maintains a list of shared `TreeType` objects and provides a method to get a tree type based on its attributes.

---

**4. Forest.php**:

```php
<?php

require_once 'Tree.php';
require_once 'TreeFactory.php';

class Forest {
    private array $trees = [];
    private TreeFactory $treeFactory;

    public function __construct() {
        $this->treeFactory = new TreeFactory();
    }

    public function plantTree(int $x, int $y, string $name, string $color, string $texture): void {
        $type = $this->treeFactory->getTreeType($name, $color, $texture);
        $tree = new Tree($x, $y, $type);
        $this->trees[] = $tree;
    }

    public function render(): string {
        $output = '';
        foreach ($this->trees as $tree) {
            $output .= $tree->render();
        }
        return $output;
    }
}

?>
```

Explanation: `Forest` uses the `TreeFactory` to get tree types and maintains a list of individual `Tree` objects. It provides methods to plant a tree and render the forest.

---

**5. index.php**:

```php
<?php

require_once 'Forest.php';

$forest = new Forest();

$forest->plantTree(1, 2, "Pine", "Green", "PineTexture");
$forest->plantTree(5, 7, "Oak", "Green", "OakTexture");
$forest->plantTree(6, 9, "Pine", "Green", "PineTexture");

echo $forest->render();

?>
```

When you run `index.php`, you should see the following output in the browser:

```
Rendered a Pine at (1, 2) with color Green and texture PineTexture.
Rendered an Oak at (5, 7) with color Green and texture OakTexture.
Rendered a Pine at (6, 9) with color Green and texture PineTexture.
```

This demonstration shows that even though there are multiple trees in the forest, only two tree types are actually created and shared, thus optimizing memory usage.
