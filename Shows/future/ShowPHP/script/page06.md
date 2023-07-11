[home](./page01.md)

[back](./page05.md)

We use a **Deep Copy** when you want *a fully independent copy* of the object, including its nested objects. 

This is used when you don't want changes to the copied object to affect the original object.

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
