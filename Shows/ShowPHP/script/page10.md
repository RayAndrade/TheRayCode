[home](./page01.md)

[back](./page09.md)

Create class **Vehicle.php**

```
Vehicle
```

add code for requiers

```
require_once 'Model.php';
```
Add code
```
public $model;

public function __construct(Model $model) {
    $this->model = $model;
}

public function getModel() {
    return $this->model->getName();
}
```


[page 11](./page11.md)
