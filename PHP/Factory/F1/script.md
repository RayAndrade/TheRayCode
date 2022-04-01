Let's look at the Factory method using PHP.
We start by creating and *interface* we call **Shape**. Shape will be and interface to many object that we have.
```php
interface Shape
{
    public function draw();
}
```
next we will create a *class* we call **Rectangle** that will inplement **Shape**.
Let's also implement the missing method.
```php
class Rectangle implements Shape
{
    public function draw()
    {
        // TODO: Implement draw() method.
    }
}
```
we repace the *todo* with

```php
echo "Drawing a Rectangle";
```

```php
private $position;

public function __construct($pos){
   $this->position = $pos;
}

    //public $x;
    //public $y;
    //public $w;
    //public $h;

public function draw()
{
    echo "Drawing a rectangle<br/>";
}
```
