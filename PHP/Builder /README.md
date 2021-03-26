# TheRayCode
## Builder Php

The Builder pattern can be recognized in a class that has a single creation method and *several methods* to configure the resulting object.
The **Builder** interface specifies those methods for creating the different parts of a **Product**.

```php
interface Builder
{
    public function producePartA(): void;
    public function producePartB(): void;
    public function producePartC(): void;
}
```
The **RealBuilder** classes follow the **Builder** *interface* and provides specific implementations of the building steps. 
The program may have several variations of *Builders*, implemented differently.

We now build a class object called **RealBuilder**.
The code for **RealBuilder**.php is as follows:
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
Concrete Builders are supposed to provide their own methods for retrieving results. 
That's because various types of builders may create entirely different products that don't follow the same interface.
Therefore, such methods cannot be declared in the base Builder interface (at least in a statically typed programming language). 
Note that PHP is a *dynamically typed language* and this method **can** be in the base interface.
However, we won't declare it there for the sake of clarity.

![Factory](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/images/Builder098-php.png)


Usually, after returning the end result to the client, a builder instance is expected to be ready to start producing another product. 
That's why it's a usual practice to call the reset method at the end of the *getProduct* method body. 
However, this behavior is not *mandatory*, and you can make your builders wait for an explicit reset call from the client code before disposing of the previous result.

It makes sense to use the Builder pattern only when your products are quite complex and require extensive configuration.

Unlike in other creational patterns, different concrete builders can produce unrelated products. 
In other words, results of various builders may not always follow the same interface.

Let'now create a class called **Product**.
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
That file looks like:
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

