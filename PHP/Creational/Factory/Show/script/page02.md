[back](./page01.md)

Next we create a class we call **Rectangle**

File > New > PHP *Class*

Name: Rectangle

Namespace: TheRayCode\Factory

Template: class

[OK]

```php
include_once "Shape.php";
```
We want to inplement **Shape** [+] button
```php
implements Shape
```
next
```php
public function draw()
{
    echo "Drawing a rectangle<br/>";
}
```


Here is the complete code for the page:

---


```php

namespace TheRayCode\Factory;

include_once "Shape.php";

class Position { }

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



...and after a horizontal rule.



[page 3](./page03.md)
