[back](./page04.md)

Note that the Creator may also provide some default implementation of the factory method.

Also note that, despite its name, the Creator's primary responsibility is not creating products. Usually, it contains some core business logic that relies on Product objects, returned by the factory method. Subclasses can indirectly change that business logic by overriding the factory method and returning a different type of product from it.

Concrete Creators override the factory method in order to change the resulting product's type.

we create a class called **Creator1** that will **extends Creator**

and looks like

```php

class Creator2 extends Creator
{
   public function factoryMethod(): Product
   {
      return new Product2();
   }
}

```

[page 6](./page06.md)
