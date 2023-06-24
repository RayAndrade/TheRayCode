[home](./page01.md)

[back](./page01.md)

create the **Car.php** class

```
class Car {  }
```

add some vars to define this class

```
private string $model;
private string $color;
private int $year;
```


add a constructer

```
public function __construct(string $model, string $color, int $year) {
    $this->model = $model;
    $this->color = $color;
    $this->year = $year;
}
```


add a clone funtion

```
public function clone(): Car {
    return clone $this;
}
```

add a **getInfo()** method

```
public function getInfo(): string {
    return "Model: $this->model, Color: $this->color, Year: $this->year";
}
```


[page 3](./page03.md)
