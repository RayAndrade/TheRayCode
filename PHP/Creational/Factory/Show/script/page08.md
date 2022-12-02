[back](./page07.md)

**ShapeFactory**

```php

include_once ('Rectangle.php');

class ShapeFactory
{
    public function __construct($type)
    {
        if ($type=="Rectangle"){
            // 7:55
            return new Rectangle(new Position());
        }
    }

}

```

[page 9](./page09.md)
