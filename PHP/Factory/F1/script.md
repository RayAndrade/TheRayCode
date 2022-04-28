Let's look at the Factory method using PHP.
We start by creating and *interface* we call **Shape**. 

File > New > PHP Class

Name: Shape
Namespace: TheRayCode\Factory
Filename: Shape
Template: interface
[OK]

add code 
```php
public function draw();
```
Next we create a class we call **Rectangle**

File > New > PHP Class

Name: Rectangle
Namespace: TheRayCode\Factory
Filename: Rectangle
Template: class
[OK]
```php
include_once "Shape.php";
```
We want to inplement **Shape**
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
At the top we can add
```php
class Position { }
```
add some code:
```php
//public $x;
//public $y;
//public $w;
//public $h;
    
private $position;

public function __construct($pos){
    $this->position = $pos;
}
```

next we add another *class* called **MockShape**
it will implment **Shape**


```php
implements Shape
```

add code to return true 
```php
public function draw()
{
    // does a lot of mock stuff
    return true;
}
```
so now let's put this all a a class called **ShapeFactory**
```php
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































