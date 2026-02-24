**Strategy.php**

```php
interface Strategy
{
    public function doAlgorithm(array $data): array;
}
```

**Context.php**

```php
class Context
{
    private $strategy;

    public function __construct(Strategy $strategy)
    {
        $this->strategy = $strategy;
    }

    public function setStrategy(Strategy $strategy)
    {
        $this->strategy = $strategy;
    }

    public function doSomeBusinessLogic(): void
    {
        echo "Context: Sorting data using the strategy (not sure how it'll do it)<br/>";

        $result = $this->strategy->doAlgorithm(["a", "b", "c", "d", "e"]);
        echo implode(",", $result) . "<br/>";
    }
}
```

**ConcreteStrategyA.php**

```php
class ConcreteStrategyA implements Strategy
{
    public function doAlgorithm(array $data): array
    {
        sort($data);
        return $data;
    }
}
```

**ConcreteStrategyB.php**

```php
class ConcreteStrategyB implements Strategy
{

    public function doAlgorithm(array $data): array
    {
        rsort($data);
        return $data;
    }
}
```

**index.php**

```php
include_once ('Context.php');
include_once ('Strategy.php');
include_once ('ConcreteStrategyA.php');
include_once ('ConcreteStrategyB.php');

$context = new Context(new ConcreteStrategyA);
echo "sorted.<br/>";
$context->doSomeBusinessLogic();

echo "<br/>";

echo "sorted (reverse).<br/>";
$context->setStrategy(new ConcreteStrategyB());
$context->doSomeBusinessLogic();
```

**browser view**

```run
sorted.
Context: Sorting data using the strategy (not sure how it'll do it)
a,b,c,d,e

sorted (reverse).
Context: Sorting data using the strategy (not sure how it'll do it)
e,d,c,b,a
```
