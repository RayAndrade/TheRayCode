[home](./page01.md)

[back](./page04.md)

at the **index**


**1:6**
```
include_once ('Composite.php');
include_once ('Leaf.php');
```

**2:6**
```
function clientCode(Component $component)
{
    // ...

    echo "RESULT: " . $component->operation();

    // ...
}
```

**3:6**
```
$simple = new Leaf();
echo "Client: I've got a simple component:<br/>";
clientCode($simple);
echo "<br/>";
```

**4:6**
```
$tree = new Composite();
$branch1 = new Composite();
```

**5:6**
```
$branch1->add(new Leaf());
$branch1->add(new Leaf());
$branch2 = new Composite();
$branch2->add(new Leaf());
```

**6:6**
```
$tree->add($branch1);
$tree->add($branch2);
echo "Client: Now I've got a composite tree:<br/>";
clientCode($tree);
echo "<br/>";
```

[page 6](./page06.md)