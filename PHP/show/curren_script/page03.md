[home](./page01.md)

[back](./page02.md)


**class**
```
Composite
```
**1:7**
```
 extends Component
```


**2:7**
```
protected $children;
```

**3:7**
```
public function __construct()
{
    $this->children = new \SplObjectStorage();
}
```

**4:7**
```
public function add(Component $component): void
{
    $this->children->attach($component);
    $component->setParent($this);
}
```

**5:7**
```
public function remove(Component $component): void
{
    $this->children->detach($component);
    $component->setParent(null);
}
```

**6:7**
```
public function isComposite(): bool
{
     return true;
}
```
**7:7**
```
$results = [];
foreach ($this->children as $child) {
    $results[] = $child->operation();
}
return "Branch(" . implode("+", $results) . ")";
```


[page 4](./page04.md)
