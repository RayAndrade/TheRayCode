[home](./page01.md)

[back](./page05.md)

For a **Deep** copy example, let's modify the previous example to support deep copying. 
For this, we'll make model a *complex object*.

create **class**

```
Model
```

add code

```
public $name;

public function __construct($name) {
    $this->name = $name;
}

public function setName($name) {
    $this->name = $name;
}

public function getName() {
    return $this->name;
}
```

[page 7](./page07.md)
