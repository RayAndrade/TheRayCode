[back](./page04.md)

*class* **Rectangle**

*implements* **Shape**

```php

namespace TheRayCode\Factory;

include_once "Position.php";

class Rectangle implements Shape
{
    private $position;

    public function __construct($pos){
        $this->position = $pos;
    }

    public function draw()
    {
        echo "Drawing a rectangle<br/>";
    }
}

```

[page 6](./page06.md)
