In this video I plan to do a demonstration of the **Factory** method using PHP.

The first php file I want to create will be an interface we call **Shape**.php.
The **Shape.php** file will be an interface to **Rectangle**.
The code looks like
```php
namespace TheRayCode\Factory;

interface Shape
{
    public function draw();
}
```


Now let's create the **Rectangle.php** file.
we use the namespace we call **TheRayCode\Factory**.

The class object we call **Rectangle** which will implement the **Shape** interface will look like

```php
namespace TheRayCode\Factory;
include_once "Shape.php";
class Rectangle implements Shape
{
}
```
