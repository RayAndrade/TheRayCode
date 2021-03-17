# TheRayCode
## Factory PHP

Factory methods can be recognized by creation methods, which create objects from concrete classes, but return them as objects of abstract type or interface.
In this post we will explore the **Factory** method using PHP.
We will start by creating an interface for our products. Let's call this interface **Product**.php.
**Product**.php will require one Operation for its use.
The Product interface declares the operations that all concrete products must implement.
Let's take a look at the code:

```php
interface Product
{
   public function operation(): string;
}
```
We will also create a couple of *Products* to use this interface.
Products provide various implementations of the Product interface.

```php
class Product1 implements Product
{
   public function operation(): string
   {
      return "{Result of the Product1}";
   }
}
```
Likewise we create another Prodect we call **Product2**.php

```php
class Product2 implements Product
{
   public function operation(): string
   {
      return "{Result of the Product2}";
   }
}
```
The Creator class declares the factory method that is supposed to return an object of a Product class. The Creator's subclasses usually provide the implementation of this method.
Let's create an *abstract* class we call **Creator**.php.
Inside this *abstract* class we have a couple of puplic functions:
```php
abstract class Creator
{
    abstract public function factoryMethod(): Product;

    public function someOperation(): string
    {
        $product = $this->factoryMethod();
        $result = "Creator: The same creator's code has just worked with " .
            $product->operation();
        return $result;
    }
}
```
Note that the Creator may also provide some default implementation of the factory method.

Also note that, despite its name, the Creator's primary responsibility is not creating products. 
Usually, it contains some core business logic that relies on Product objects, returned by the factory method. 
Subclasses can indirectly change that business logic by overriding the factory method  and returning a different type of product from it.

Concrete Creators override the factory method in order to change the resulting product's type.

```php
class Creator1 extends Creator
{
   public function factoryMethod(): Product
   {
      return new Product1();
   }
}
```

Note that the signature of the method still uses the abstract product type, even though the concrete product is actually returned from the method. 
This way the Creator can stay independent of concrete product classes.

Let's add another Creator class to our project.

```php
class Creator2 extends Creator
{
   public function factoryMethod(): Product
   {
      return new Product2();
   }
}
```
We are now ready to put this all together in the index.php for our demonstration.

 We make sure we have all the includes:
 
```php
include_once ('Creator.php');
include_once('Creator1.php');
include_once('Creator2.php');
include_once ('Product.php');
include_once('Product1.php');
include_once('Product2.php');
```
next we create some client code for our demo
```php
function clientCode(Creator $creator)
{
   echo "Client: I'm not aware of the creator's class, but it still works.<br/>"
        . $creator->someOperation();
}
```

The Application picks a creator's type depending on the configuration or environment.

```php
echo "App: Launched with the Creator1.<br/>";
clientCode(new Creator1);
echo "<br/><br/>";

echo "App: Launched with the Creator2.<br/>";
clientCode(new Creator2);
```
When we veiw our result through a browser we have:
```
App: Launched with the Creator1.
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the Product1}

App: Launched with the Creator2.
Client: I'm not aware of the creator's class, but it still works.
Creator: The same creator's code has just worked with {Result of the Product2}
```

[Wikipedia](https://en.wikipedia.org/wiki/Factory_method_pattern/)

![Factory](https://github.com/RayAndrade/TheRayCode/blob/main/UMLs/images/Factory.png)
----------------------------------------------------------------------------------------------------

Find Ray on:

[facebook](https://www.facebook.com/TheRayCode/)

[youtube](https://www.youtube.com/user/AndradeRay/)

[The Ray Code](https://www.RayAndrade.com)

[Ray Andrade](https://www.RayAndrade.org)


