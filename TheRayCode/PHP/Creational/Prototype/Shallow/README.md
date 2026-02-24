[up](../README.md)

**Vehicle.php**

```
namespace TheRayCode\Prototype;

class Vehicle
{
    public $model;

    public function __construct($model) {
        $this->model = $model;
    }

    public function getModel() {
        return $this->model;
    }
}
```


**Car.php**

```
namespace TheRayCode\Prototype;

require_once 'Vehicle.php';
class Car extends Vehicle
{
    public function __clone() {
    }
}
```
