[home](./page01.md)

In PHP, you might create a Sandwich class as follows in a file named **Sandwich.php**:

Crete *class*
```
Sandwich
```
Add varables that are needed

```
private $bread;
private $meat;
private $cheese;
private $veggies;
```
add the **function __construct**er

```
function __construct($bread, $meat, $cheese, $veggies) {
    $this->bread = $bread;
    $this->meat = $meat;
    $this->cheese = $cheese;
    $this->veggies = $veggies;
}
```

Let's format our **toString** function

```
function __toString() {
    return $this->bread . ", " . $this->meat . ", " . $this->cheese . ", " . $this->veggies;
}
```


[page 2](./page02.md)
