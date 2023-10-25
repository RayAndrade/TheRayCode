[home](./page01.md)

[back](./page01.md)

abstract class **Component**

```
Component
```
**1:6**
```
abstract
```

**2:6**
```
public function setParent(Component $parent)
{
    $this->parent = $parent;
}


```

**3:6**
```
public function getParent(): Component
{
    return $this->parent;
}


```

**4:6**
```
public function add(Component $component): void { }
public function remove(Component $component): void { }


```

**5:6**
```
public function isComposite(): bool
{
    return false;
}
```

**6:6**
```
abstract public function operation(): string;
```

[page 3](./page03.md)
