[back](./page04.md)


so now let's put this all a a class called **ShapeFactory**
```php
namespace TheRayCode\Factory;
include_once ('Rectangle.php');
```

the code for our class will be

```
public function __construct($type)
{
    if ($type=="Rectangle"){
        return new Rectangle(new Position());
    }
}
```

[page 6](./page06.md)
