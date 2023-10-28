The Interpreter pattern is used to represent a grammar of a language in an object-oriented fashion and interpret sentences of that language. For this example, let's consider a simple arithmetic expression evaluator that can handle addition and subtraction.

Here's a step-by-step implementation using PHP:

1. **Expression.php** - The abstract expression which declares an abstract interpret operation.
```php
<?php
// Expression.php
interface Expression {
    public function interpret($context);
}
?>
```

2. **NumberExpression.php** - Terminal Expression for numbers.
```php
<?php
// NumberExpression.php
include_once 'Expression.php';

class NumberExpression implements Expression {
    private $number;

    public function __construct($number) {
        $this->number = $number;
    }

    public function interpret($context) {
        return $this->number;
    }
}
?>
```

3. **AddExpression.php** - Non-terminal expression to represent Addition.
```php
<?php
// AddExpression.php
include_once 'Expression.php';

class AddExpression implements Expression {
    private $leftExpression;
    private $rightExpression;

    public function __construct(Expression $left, Expression $right) {
        $this->leftExpression = $left;
        $this->rightExpression = $right;
    }

    public function interpret($context) {
        return $this->leftExpression->interpret($context) + $this->rightExpression->interpret($context);
    }
}
?>
```

4. **SubtractExpression.php** - Non-terminal expression to represent Subtraction.
```php
<?php
// SubtractExpression.php
include_once 'Expression.php';

class SubtractExpression implements Expression {
    private $leftExpression;
    private $rightExpression;

    public function __construct(Expression $left, Expression $right) {
        $this->leftExpression = $left;
        $this->rightExpression = $right;
    }

    public function interpret($context) {
        return $this->leftExpression->interpret($context) - $this->rightExpression->interpret($context);
    }
}
?>
```

5. **Demo with index.php**:
```php
<?php
// index.php
include_once 'Expression.php';
include_once 'NumberExpression.php';
include_once 'AddExpression.php';
include_once 'SubtractExpression.php';

$context = "";  // This can be used to provide any contextual data necessary for interpretation.

// Constructing an expression tree: 5 + 3 - 2
$numberFive = new NumberExpression(5);
$numberThree = new NumberExpression(3);
$addition = new AddExpression($numberFive, $numberThree);
$numberTwo = new NumberExpression(2);
$resultExpression = new SubtractExpression($addition, $numberTwo);

// Interpreting the expression
$result = $resultExpression->interpret($context);

echo "Result of 5 + 3 - 2 = $result";  // This should output 6
?>
```

Explanation:

- **Expression.php**: This is the interface that every concrete expression class will implement. The `interpret` method is the primary method that will execute the logic to evaluate the expression.
  
- **NumberExpression.php**: This class represents numbers in our arithmetic expressions. Its `interpret` method simply returns the number itself.
  
- **AddExpression.php & SubtractExpression.php**: These are the non-terminal expressions. They combine other expressions. Their `interpret` methods delegate the interpretation to the encapsulated expressions and then apply the arithmetic operation.

- **index.php**: Here, we're creating an expression tree to represent `5 + 3 - 2` and then interpreting it. The result should be `6`.

To ensure this code works as expected, ensure you place each class in its separate file and include them appropriately in the `index.php` as demonstrated.
