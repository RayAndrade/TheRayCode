[back](./page06.md)


now let's put this all in **Demo.php**

```php
namespace TheRayCode\Factory;
include_once ('ShapeFactory.php');

function drawStuff(Shape $shape){
    $shape ->draw();
}
```

more code
```php
$shape1 = new Rectangle(new Position());
$shape2 = new Rectangle(new Position());

drawStuff($shape1);
drawStuff($shape2);
```

and view in the browser



[page 8](./page08.md)
