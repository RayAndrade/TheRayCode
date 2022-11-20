The Factory Method

The Factory methods pattern can be recognized by having creation methods which comes from objects chreated from concrete classes, but return them as objects of abstract type or interface. n this post we will explore the Factory method using PHP. We will start by creating an interface for our products. 

Let's create an onterfase call this interface Product.php. 
Product.php will require one Operation for its use. The Product interface declares the operations that all concrete products *must* implement. 

Let's take a look at the code:

We create the *interface* we call **Product** here is some code

```php
interface Product
{
   public function operation(): string;
}

```


[page 2](./page02.md)
