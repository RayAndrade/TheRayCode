[home](./page01.md) | [back](./page04.md) | [next](./page06.md)

class: **SubtractExpression.php**
```
SubtractExpression
```

```
include_once 'Expression.php';
```

```
 implements Expression
```

auto generate:


local varables 
```
private $leftExpression;
private $rightExpression;
```

**construct**

```
public function __construct(Expression $left, Expression $right) {
   $this->leftExpression = $left;
   $this->rightExpression = $right;
}
```

change the TODO and return the **leftExpression**
```
return $this->leftExpression->interpret($context) - $this->rightExpression->interpret($context);
```

[page 6](./page06.md)
