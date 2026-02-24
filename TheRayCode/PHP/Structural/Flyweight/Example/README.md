[up](../README.md)

The Flyweight design pattern is a structural pattern used for reducing the memory usage when you have a large number of similar objects. Instead of creating large numbers of similar objects, you create a few objects (flyweights) and share them. Flyweights are immutable: their internal state cannot change after they're constructed.

In this example, we will create a simple application that simulates a forest with trees, using the Flyweight pattern to minimize memory use when representing the trees.

First, let's discuss the structure of the files and classes:

1. `TreeType.php` - Represents the Flyweight object class. This class would hold the common properties of many trees (like name, color, texture).
2. `TreeFactory.php` - The Flyweight Factory class. It ensures that TreeType objects are shared properly instead of creating new ones unnecessarily.
3. `Tree.php` - The context object. While TreeType holds the intrinsic state (shared), the Tree class holds the extrinsic state (unique for each object - like position).
4. `Forest.php` - The client class. It would manage the tree objects and render them.
5. `index.php` - The script for demonstration.

Let's go through each file:

1. `TreeType.php`:

```php
<?php
// TreeType.php
class TreeType
{
    private string $name;
    private string $color;
    private string $texture;

    public function __construct(string $name, string $color, string $texture)
    {
        $this->name = $name;
        $this->color = $color;
        $this->texture = $texture;
    }

    public function draw(string $canvas, int $x, int $y): void
    {
        // Here, you can implement the code to draw the tree on the canvas.
        // This is a mock implementation of the draw method, which in a real-world scenario would render the tree on the screen.
        echo "TreeType: Draw a '$this->name' tree with color '$this->color' and texture '$this->texture' at ($x, $y) on canvas: $canvas.<br>";
    }
}
?>
```

2. `TreeFactory.php`:

```php
<?php
// TreeFactory.php
class TreeFactory
{
    private static array $treeTypes = [];

    public static function getTreeType(string $name, string $color, string $texture): TreeType
    {
        $key = $name . $color . $texture;

        if (!isset(self::$treeTypes[$key])) {
            self::$treeTypes[$key] = new TreeType($name, $color, $texture);
        }

        return self::$treeTypes[$key];
    }
}
?>
```

3. `Tree.php`:

```php
<?php
// Tree.php
class Tree
{
    private int $x;
    private int $y;
    private TreeType $type;

    public function __construct(int $x, int $y, TreeType $type)
    {
        $this->x = $x;
        $this->y = $y;
        $this->type = $type;
    }

    public function draw(string $canvas): void
    {
        $this->type->draw($canvas, $this->x, $this->y);
    }
}
?>
```

4. `Forest.php`:

```php
<?php
// Forest.php
class Forest
{
    private array $trees = [];

    public function plantTree(int $x, int $y, string $name, string $color, string $texture): void
    {
        $type = TreeFactory::getTreeType($name, $color, $texture);
        $tree = new Tree($x, $y, $type);
        $this->trees[] = $tree;
    }

    public function draw(string $canvas): void
    {
        foreach ($this->trees as $tree) {
            $tree->draw($canvas);
        }
    }
}
?>
```

5. `index.php`:

```php
<?php
// index.php
require_once 'TreeType.php';
require_once 'TreeFactory.php';
require_once 'Tree.php';
require_once 'Forest.php';

$forest = new Forest();

// Planting trees with shared TreeType objects
$forest->plantTree(1, 2, "Cherry Blossom", "Pink", "CherryTexture");
$forest->plantTree(5, 3, "Maple", "Red", "MapleTexture");
$forest->plantTree(10, 6, "Cherry Blossom", "Pink", "CherryTexture");

// Drawing the forest with trees
$forest->draw("Canvas1");
?>
```

The order of creating classes would logically be `TreeType`, `TreeFactory`, `Tree`, `Forest`, then lastly the `index.php` for testing.

When you navigate to "index.php" in your browser, you should see a textual representation of trees being drawn on a canvas, demonstrating that multiple trees share the same `TreeType` objects for trees of the same type (e.g., Cherry Blossom trees), which saves memory. The actual "drawing" is, in this case, a print statement, but in a graphical application, it would involve rendering graphics on the screen.
