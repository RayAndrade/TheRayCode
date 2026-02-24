[up](../README.md)

Let's redefine the Interpreter design pattern for colors. Let's say we're trying to interpret a combination of primary colors to produce secondary colors. We'll use the basic combinations:

- Red + Blue = Purple
- Red + Yellow = Orange
- Blue + Yellow = Green

Here's a step-by-step implementation for this:

1. **ColorExpression.php** - The abstract expression which declares an interpret operation.
```php
<?php
// ColorExpression.php
interface ColorExpression {
    public function interpret();
}
?>
```

2. **PrimaryColorExpression.php** - Terminal Expression for primary colors.
```php
<?php
// PrimaryColorExpression.php
include_once 'ColorExpression.php';

class PrimaryColorExpression implements ColorExpression {
    private $color;

    public function __construct($color) {
        $this->color = $color;
    }

    public function interpret() {
        return $this->color;
    }
}
?>
```

3. **CombineColorExpression.php** - Non-terminal expression to represent color combinations.
```php
<?php
// CombineColorExpression.php
include_once 'ColorExpression.php';

class CombineColorExpression implements ColorExpression {
    private $color1;
    private $color2;

    public function __construct(ColorExpression $color1, ColorExpression $color2) {
        $this->color1 = $color1;
        $this->color2 = $color2;
    }

    public function interpret() {
        if ($this->color1->interpret() == "Red" && $this->color2->interpret() == "Blue") {
            return "Purple";
        }
        if ($this->color1->interpret() == "Red" && $this->color2->interpret() == "Yellow") {
            return "Orange";
        }
        if ($this->color1->interpret() == "Blue" && $this->color2->interpret() == "Yellow") {
            return "Green";
        }
        return "Unknown combination";
    }
}
?>
```

4. **Demo with index.php**:
```php
<?php
// index.php
include_once 'ColorExpression.php';
include_once 'PrimaryColorExpression.php';
include_once 'CombineColorExpression.php';

$red = new PrimaryColorExpression("Red");
$blue = new PrimaryColorExpression("Blue");
$yellow = new PrimaryColorExpression("Yellow");

$combineRedBlue = new CombineColorExpression($red, $blue);
$combineRedYellow = new CombineColorExpression($red, $yellow);
$combineBlueYellow = new CombineColorExpression($blue, $yellow);

echo "Red + Blue = " . $combineRedBlue->interpret() . "\n";  // Should output Purple
echo "Red + Yellow = " . $combineRedYellow->interpret() . "\n";  // Should output Orange
echo "Blue + Yellow = " . $combineBlueYellow->interpret();  // Should output Green
?>
```

Explanation:

- **ColorExpression.php**: This is the interface every concrete color expression class implements. The `interpret` method is the primary method that will execute the logic to determine the resulting color.

- **PrimaryColorExpression.php**: Represents primary colors. Its `interpret` method simply returns the color itself.

- **CombineColorExpression.php**: This class represents the combination of two colors. Its `interpret` method checks which two colors are being combined and returns the resulting secondary color.

- **index.php**: Here, we're combining different primary colors to produce secondary colors. 

When you run `index.php`, you should get the resulting secondary colors based on the primary colors you combined.
