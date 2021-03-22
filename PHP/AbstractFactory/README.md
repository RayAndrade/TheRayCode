# TheRayCode
## Abstract Factory Php

In this article we will review the **Abstract Factory** pattern using Php.
This pattern allows you to create a family of classes in which the subclasses of this *family* can cooperate together.

We start our demonstration by creating an *interface* we called **AbstractFactory**.
The **AbstractFactory** *interface* declares a set of methods that return different abstract products. 
These products are called a family and are related by a high-level theme or concept. 
Products of one family are usually able to *collaborate* among themselves. 
A family of products may have several variants, but the products of one variant may be incompatible with the other products.
Here is the code for this interface:
```php
interface AbstractFactory
{
    public function createProductA(): IProductA;

    public function createProductB(): IProductB;
}
```
As you can see we need a coulpe of classes accourding to this interface.
Instead we will create and add a couple of *interfaces* for our project.
The interfaces we want will be named **IProductA** and **IProductB**.
We will start with the interface **IProductA**.
The code for this file will be:
```php
interface IProductA
{
    public function usefulFunctionA(): string;
}
```

We create another interface **IProductB** and we have:
```php
interface IProductB
{
    public function usefulFunctionB(): string;

    public function anotherUsefulFunctionB(IProductA $collaborator): string;
}
```
The Abstract Factory makes sure that all products it creates are of the same type (*variant*) and thus are compatible.

Let's now create our products.
Our Concrete Products are created by corresponding their Concrete Factories.
We will call them **ProductA1**, **ProductA2**, **ProductB1** and **ProductB2**.
We start with **ProductA1**.
```php
class ProductA1 implements IProductA
{
    public function usefulFunctionA(): string
    {
        return "The result of the product A1.";
    }
}

```
Next for **ProductA2** we have:
```php
class ProductA2 implements IProductA
{
    public function usefulFunctionA(): string
    {
        return "The result of the product A2.";
    }
}
```
Both **ProductA1** and **ProductA2** implement **IProductA**.

We now go to the **IProductB** side of our demonstration.
The name of the classes will be **ProductB1** and **ProductB2**.
Both will implement **IProductB**.
The variant, **ProductB1**, is only able to work correctly with the variant, **ProductA1**. Nevertheless, it accepts any instance of IProductA an argument.
The code for **ProductB1** is:
```php
class ProductB1 implements IProductB
{
    public function usefulFunctionB(): string
    {
        return "The result of the product B1.";
    }
    
    public function anotherUsefulFunctionB(IProductA $collaborator): string
    {
        $result = $collaborator->usefulFunctionA();
        return "The result of the B1 collaborating with the ({$result})";
    }
}
```
The variant, **ProductB2**, is only able to work correctly with the variant, **ProductA2**. 
Nevertheless, it accepts any instance of **IProductA** as an argument.
The code for **ProductB2** will be:
```php
class ProductB2 implements IProductB
{
    public function usefulFunctionB(): string
    {
        return "The result of the product B2.";
    }

    public function anotherUsefulFunctionB(IProductA $collaborator): string
    {
        $result = $collaborator->usefulFunctionA();

        return "The result of the B2 collaborating with the ({$result})";
    }
}
```
The Concrete Factories produce a family of products that belong to a single variant (*type*). 
The factory guarantees that resulting products are compatible. 
Note that signatures of the Concrete Factory's methods return an abstract product, while inside the method a concrete product is instantiated.

```php
class Factory1 implements AbstractFactory
{
    public function createProductA(): IProductA
    {
        return new ProductA1;
    }

    public function createProductB(): IProductB
    {
        return new ProductB1;
    }
}
```

And for **Factory2**, it also implements the **AbstractFactory**
```php
class Factory2 implements AbstractFactory
{
    public function createProductA(): IProductA
    {
        return new ProductA2;
    }
    public function createProductB(): IProductB
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
