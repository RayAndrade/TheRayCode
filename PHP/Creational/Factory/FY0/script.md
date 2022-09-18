We start with by creating an *interface* we call **Product** the namespace we will name **products**.
We will use the *interface* template
```php
interface Product
{
    public function operation(): string;
}
```
Let's create the class object **Product1** which will *implement* **Product**. which extends **Product**.
```php
implements Product
```
replace output with
```php
return "{Result of the Product1}";
```

now create **Product2** which will be *implemented* **Product**. which also extends **Product**.
```php
return "{Result of the Product2}";
```
next we create the class **Creator**. It will be **abstract**.
the code will be
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

we create **Creator1** which is *extended* by the abstract class **Creator**
```php
class Creator1 extends Creator
{
    public function factoryMethod(): Product
    {
        return new Product1();
    }
}
```







































