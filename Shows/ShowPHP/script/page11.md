[home](./page01.md)

[back](./page10.md)

create class **Car**

```
Car
```

```
require_once 'Vehicle.php';
```

```
 extends Vehicle 
```

```
public function __clone() {
    $this->model = clone $this->model;
}
```

[page 12](./page12.md)
