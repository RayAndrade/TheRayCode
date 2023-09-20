Alright, let's design an arithmetic expression interpreter as an example of the Interpreter pattern in PHP.

**1. `Expression.php` - Abstract Expression**
```php
<?php

// Abstract expression class
abstract class Expression {
    public abstract function interpret(array $context);
}

?>
```
This is the abstract class for our interpreter's expressions. Each concrete expression class will inherit from this and implement the `interpret` method.

**2. `Number.php` - Terminal Expression**
```php
<?php

include_once 'Expression.php';

class Number extends Expression {
    private $number;

    public function __construct($number) {
        $this->number = $number;
    }

    public function interpret(array $context) {
        return $this->number;
    }
}

?>
```
This is a terminal expression. It simply returns a number.

**3. `Add.php` - Non-terminal Expression**
```php
<?php

include_once 'Expression.php';

class Add extends Expression {
    private $leftExpression;
    private $rightExpression;

    public function __construct(Expression $left, Expression $right) {
        $this->leftExpression = $left;
        $this->rightExpression = $right;
    }

    public function interpret(array $context) {
        return $this->leftExpression->interpret($context) + $this->rightExpression->interpret($context);
    }
}

?>
```
This is a non-terminal expression for addition.

**4. `Subtract.php` - Another Non-terminal Expression**
```php
<?php

include_once 'Expression.php';

class Subtract extends Expression {
    private $leftExpression;
    private $rightExpression;

    public function __construct(Expression $left, Expression $right) {
        $this->leftExpression = $left;
        $this->rightExpression = $right;
    }

    public function interpret(array $context) {
        return $this->leftExpression->interpret($context) - $this->rightExpression->interpret($context);
    }
}

?>
```
This is a non-terminal expression for subtraction.

**5. `index.php` - Demo**
```php
<?php

include_once 'Number.php';
include_once 'Add.php';
include_once 'Subtract.php';

// Create expressions
$addition = new Add(new Number(3), new Number(5));
$subtraction = new Subtract(new Number(8), new Number(5));

// Interpret the expressions
echo "Result of addition: " . $addition->interpret([]) . PHP_EOL;
echo "Result of subtraction: " . $subtraction->interpret([]) . PHP_EOL;

?>
```

This demonstrates the usage of our Interpreter pattern. Here's how everything comes together:

- **Expression**: This is the abstract expression that all terminal and non-terminal expressions will inherit from. It ensures each expression has an `interpret` method.
- **Number**: This is a terminal expression. It holds a number and just returns that number when its `interpret` method is called.
- **Add & Subtract**: These are non-terminal expressions. They hold two other expressions and when their `interpret` methods are called, they execute their operations (addition and subtraction) on the results of interpreting their child expressions.
- **index.php**: This is our main method which demonstrates our Interpreter. We create an addition and a subtraction expression and then interpret them.

In terms of includes, you can see that each file only includes the files it directly depends on. This ensures each file has access to the classes it needs without unnecessarily including everything.
