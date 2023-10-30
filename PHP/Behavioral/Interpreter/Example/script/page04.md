[home](./page01.md) | [back](./page03.md) | [next](./page05.md)

**AddExpression.php**
```
AddExpression
```
add to the top:
```
include_once 'Expression.php';
```

```
 implements Expression
```

auto generate and add code:

local privite ariables:
```
private $leftExpression;
private $rightExpression;
```
**construct:**
```
public function __construct(Expression $left, Expression $right) {
    $this->leftExpression = $left;
    $this->rightExpression = $right;
}
```
to the function **interpret** we replace the TODO:
```
return $this->leftExpression->interpret($context) + $this->rightExpression->interpret($context);
```


[page 5](./page05.md)
