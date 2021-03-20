# TheRayCode
## Abstract Factory Php

In this article we will review the **Abstract Factory** pattern using Php.
This pattern allows you to create a family of classes in which
the subclasses of this *family* can cooperate together.

We start by creating an **AbstractFactory** *interface*.
The Abstract Factory interface declares a set of methods that return
different abstract products. These products are called a family and are
related by a high-level theme or concept. Products of one family are usually
able to collaborate among themselves. A family of products may have several
variants, but the products of one variant are incompatible with products of
another.

This is the code for the **AbstractFactory** *interface*.

```php
interface AbstractFactory
{
    public function createProductA(): AbstractProductA;

    public function createProductB(): AbstractProductB;
}
```
So you see we need a coulpe of classes to add to this interface.
We will create a couple of interfaces for our project.
The interfaces se want to add will be **AbstractProductA** and **AbstractProductB**.
We start with the interface **AbstractProductA**.
Its code will be:
```php
interface AbstractProductA
{
    public function usefulFunctionA(): string;
}
```

Product B is able to do its own thing.
And for **AbstractProductB** we have:
```php
interface AbstractProductB
{
    public function usefulFunctionB(): string;

    public function anotherUsefulFunctionB(AbstractProductA $collaborator): string;
}
```
The Abstract Factory makes sure that all products it creates are of the same variant and thus, compatible.

Let's create our products.
Our Concrete Products are created by corresponding Concrete Factories.
We will call them **ProductA1**, **ProductA2**, **ProductB1** and **ProductB2**.
We start with **ProductA1**.
```php
class ProductA1 implements AbstractProductA
{
    public function usefulFunctionA(): string
    {
        return "The result of the product A1.";
    }
}

```
Next for **ProductA2** we have:
```php
class ProductA2 implements AbstractProductA
{
    public function usefulFunctionA(): string
    {
        return "The result of the product A2.";
    }
}
```
Both **ProductA1** and **ProductA2** implement **AbstractProductA**.
We now go to the **AbstractProductB** side of our demonstration.
The name of the classes will be **ProductB1** and **ProductB2**.
Both will implement **AbstractProductB**.
The variant, **ProductB1**, is only able to work correctly with the variant, **ProductA1**. Nevertheless, it accepts any instance of AbstractProductA an argument.
The code for **ProductB1** is:
```php
class ProductB1 implements AbstractProductB
{
    public function usefulFunctionB(): string
    {
        return "The result of the product B1.";
    }
    
    public function anotherUsefulFunctionB(AbstractProductA $collaborator): string
    {
        $result = $collaborator->usefulFunctionA();
        return "The result of the B1 collaborating with the ({$result})";
    }
}
```
The variant, **ProductB2**, is only able to work correctly with the variant, **ProductA2**. Nevertheless, it accepts any instance of **AbstractProductA** as an argument.
The code for **ProductB2** it will be:
```php
class ProductB2 implements AbstractProductB
{
    public function usefulFunctionB(): string
    {
        return "The result of the product B2.";
    }

    public function anotherUsefulFunctionB(AbstractProductA $collaborator): string
    {
        $result = $collaborator->usefulFunctionA();

        return "The result of the B2 collaborating with the ({$result})";
    }
}
```
Concrete Factories produce a family of products that belong to a single variant. 
The factory guarantees that resulting products are compatible. 
Note that signatures of the Concrete Factory's methods return an abstract product, while inside the method a concrete product is instantiated.

```php
class Factory1 implements AbstractFactory
{
    public function createProductA(): AbstractProductA
    {
        return new ProductA1;
    }

    public function createProductB(): AbstractProductB
    {
        return new ProductB1;
    }
}
```

And for **Factory2**, it also implements the **Abstract*Factory***
```php
class Factory2 implements AbstractFactory
{
    public function createProductA(): AbstractProductA
    {
        return new ProductA2;
    }
    public function createProductB(): AbstractProductB
    {
        return new ProductB2;
    }
}
```
The last place we need to go is to the **index**.php file.
The code for that file is:
```php
function clientCode(AbstractFactory $factory)
{
  $productA = $factory->createProductA();
  $productB = $factory->createProductB();

  echo $productB->usefulFunctionB() . "<br/>";
  echo $productB->anotherUsefulFunctionB($productA) . "<br/>";
}

/**
* The client code can work with any concrete factory class.
*/
echo "Client: Testing client code with the first factory type:<br/>";
clientCode(new Factory1);

echo "<br/>";

echo "Client: Testing the same client code with the second factory type:<br/>";
clientCode(new Factory2);
```
When we run the code we should get:

```
Client: Testing client code with the first factory type:
The result of the product B1.
The result of the B1 collaborating with the (The result of the product A1.)

Client: Testing the same client code with the second factory type:
The result of the product B2.
The result of the B2 collaborating with the (The result of the product A2.)
```


[Wikipedia](https://en.wikipedia.org/wiki/Abstract_factory_pattern)


----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)













































[Github](https://www.TheRayCode.com)
