[back](./page05.md)

We do the same thing to create **Creator2**


we create a class called **Creator2** that will **extends Creator**

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



[page 7](./page07.md)
