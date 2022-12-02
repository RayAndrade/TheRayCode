[back](./page02.md)


Next we create a class we call **Rectangle**

File > New > PHP *Class*

Name: Rectangle

Namespace: TheRayCode\Factory

Template: class

[OK]

```php
include_once "Shape.php";
```

```php
class Position { }

class Rectangle implements Shape
{ 

}

```
The code for **Rectangle** is :

```php

```




Here is the complete code for the page:

---

```php

include_once "Shape.php";

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

---



[page 4](./page04.md)
