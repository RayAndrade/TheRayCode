[up](../README.md)

This code provides an implementation of the Strategy design pattern in PHP. The Strategy pattern is a behavioral design pattern that defines a family of algorithms, encapsulates each algorithm, and makes them interchangeable. It lets the algorithm vary independently from clients that use it.

Let's break down each part:

1. **Strategy.php**

```php
interface Strategy
{
    public function doAlgorithm(array $data): array;
}
```

This is an interface named `Strategy`. It declares a single method `doAlgorithm` which requires an array as an argument and returns an array. Any class that implements this interface will have to provide an actual implementation for this method. This is the core of the Strategy pattern – defining a common interface for all the strategies.

2. **Context.php**

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

`Context` is a class that uses a strategy to perform some business logic. It contains:
- A private variable `$strategy` to hold the current strategy object.
- A constructor method that accepts a strategy and sets it.
- A `setStrategy` method that allows changing the strategy at runtime.
- A `doSomeBusinessLogic` method that uses the strategy to sort an array of characters and then prints out the sorted list. This demonstrates how the `Context` class delegates the sorting operation to the strategy it contains.

3. **ConcreteStrategyA.php**

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

`ConcreteStrategyA` is one of the concrete strategy classes. It implements the `Strategy` interface and provides a specific implementation for the `doAlgorithm` method that sorts the data in ascending order.

4. **ConcreteStrategyB.php**

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

`ConcreteStrategyB` is another concrete strategy class. Similar to `ConcreteStrategyA`, it implements the `Strategy` interface, but its implementation for the `doAlgorithm` method sorts the data in descending order.

5. **index.php**

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

This is the client code. It first includes all the necessary files. It then creates an instance of the `Context` class with `ConcreteStrategyA` as its initial strategy. It does the business logic with this strategy, then changes the strategy to `ConcreteStrategyB` and performs the business logic again.

6. **browser view**

The browser view shows the output when the code from `index.php` is run. Initially, the data is sorted in ascending order (`a,b,c,d,e`), and after changing the strategy, it's sorted in descending order (`e,d,c,b,a`).

To summarize, the Strategy pattern here allows the sorting behavior to be defined separately from the `Context` class and lets you easily swap sorting algorithms without changing the client code.

[Wikipedia](https://en.wikipedia.org/wiki/Strategy_pattern)

----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/TheRayCode/)

[X](https://twitter.com/TheRayCode)

[The Ray Code](https://www.TheRayCode.org)

[Ray Andrade](https://www.RayAndrade.com)
