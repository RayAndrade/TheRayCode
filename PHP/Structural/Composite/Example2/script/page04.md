[home](./page01.md)

[back](./page03.md)

**Composite.php**

This defines behavior for components having children and to store child components.

```
Composite
```

include **Component**

```
include_once 'Component.php';
```

Extends the class
```
 extends Component 
```

add for the children

```
private $children = [];

public function add(Component $component): void {
    array_push($this->children, $component);
}

public function remove(Component $component): void {
    $this->children = array_filter($this->children, function ($child) use ($component) {
        return $child !== $component;
    });
}
```

for **draw** we cycle thru the **children**

```
echo "Drawing " . $this->name . "<br>";
foreach ($this->children as $child) {
    $child->draw();
 }
```




[page 5](./page05.md)

