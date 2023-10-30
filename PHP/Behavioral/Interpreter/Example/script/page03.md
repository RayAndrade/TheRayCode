[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**class NumberExpression.php**

```
NumberExpression
```
add to the top
```
include_once 'Expression.php';
```


**implements Expression**
```
 implements Expression
```

add:
```
private $number;
```

and
```
public function __construct($number) {
    $this->number = $number;
}
```

plus for the **interpret** method/function auto generated code

```
return $this->number;
```


[page 4](./page04.md)
