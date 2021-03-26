# TheRayCode
## Builder Php

The Builder pattern can be recognized in a class, which has a single creation method and several methods to configure the resulting object.
The **Builder** interface specifies methods for creating the different parts of the Product objects.

```php
interface Builder
{
    public function producePartA(): void;
    public function producePartB(): void;
    public function producePartC(): void;
}
```

Next we will build a **RealBuilder**.
The code for this php page is
```php
class RealBuilder implements Builder
{
    private $product;

    public function __construct()
    {
        $this->reset();
    }
    public function reset(): void
    {
        $this->product = new Product;
    }
    public function producePartA(): void
    {
        $this->product->parts[] = "PartA";
    }

    public function producePartB(): void
    {
        $this->product->parts[] = "PartB";
    }

    public function producePartC(): void
    {
        $this->product->parts[] = "PartC";
    }

    public function getProduct(): Product
    {
        $result = $this->product;
        $this->reset();

        return $result;
    }
}

```
Let'create a class called **Product**.
```php
class Product
{
    public $parts = [];

    public function listParts(): void
    {
        echo "Product parts: " . implode(', ', $this->parts) . "<br/><br/>";
    }
}
```

Next we create a **Director** class.
That file look like:
```php
class Director
{
    private $builder;

    public function setBuilder(Builder $builder): void
    {
        $this->builder = $builder;
    }

    public function buildMinimalViableProduct(): void
    {
        $this->builder->producePartA();
    }

    public function buildFullFeaturedProduct(): void
    {
        $this->builder->producePartA();
        $this->builder->producePartB();
        $this->builder->producePartC();
    }
}
```
Finally we go to the index.php an add some client code.
First we need to add some include files:
```php
include_once ('Builder.php');
include_once('RealBuilder.php');;
include_once('Product.php');
include_once ('Director.php');
```
for the client code we have:
```php
function clientCode(Director $director)
{
    $builder = new RealBuilder;
    $director->setBuilder($builder);

    echo "Standard basic product:<br/>";
    $director->buildMinimalViableProduct();
    $builder->getProduct()->listParts();

    echo "Standard full featured product:<br/>";
    $director->buildFullFeaturedProduct();
    $builder->getProduct()->listParts();

    echo "Custom product:<br/>";
    $builder->producePartA();
    $builder->producePartC();
    $builder->getProduct()->listParts();
}
```
Lastly we add some client code to test our code
```php
$director = new Director;
clientCode($director);
echo "end<br/>";
```

The result we get is
```
Standard basic product:
Product parts: PartA

Standard full featured product:
Product parts: PartA, PartB, PartC

Custom product:
Product parts: PartA, PartC

end
```


----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)

