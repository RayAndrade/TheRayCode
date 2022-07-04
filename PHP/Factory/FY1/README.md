In this video I plan to do a demonstration of the **Factory** method using PHP.

The first php file I want to create will be the interface we call **Shape**.php
Ir looks like
```php
namespace TheRayCode\Factory;

interface Shape
{
    public function draw();
}
```
we use the namespace we call **TheRayCode\Factory**.

The next file we create will be a class object we call **Rectangle** which will implement the **Shape** interface.

```php
namespace TheRayCode\Factory;
include_once "Shape.php";
class Rectangle implements Shape
{
}
```
