[back](./page01.md)

We will also create a couple of Products to use this interface. Products provide various implementations of the Product interface.

```php

class Product1 implements Product
{
   public function operation(): string
   {
      return "{Result of the Product1}";
   }
}

```

[page 3](./page03.md)
