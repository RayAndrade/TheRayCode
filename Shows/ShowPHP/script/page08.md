[home](./page01.md)

[back](./page07.md)

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

[page 9](./page09.md)
