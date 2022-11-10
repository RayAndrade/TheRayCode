[back](./page03.md)

The Creator class declares the factory method that is supposed to return an object of a Product class. 

The Creator's subclasses usually provide the implementation of this method. Let's create an *abstract* class we call Creator.php. 

```php
abstract class Creator { }

```
Inside this abstract class we have a couple of *puplic functions*:

```php

abstract public function factoryMethod(): Product;

public function someOperation(): string
{
    $product = $this->factoryMethod();
    $result = "Creator: The same creator's code has just worked with " .
        $product->operation();
    return $result;
}

```



[page 5](./page05.md)
