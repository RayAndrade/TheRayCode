[home](./page01.md)

[back](./page04.md)

now at the index
1:6
```
include_once 'Leaf.php';
include_once 'Composite.php';
```

Creating individual components
2:6
```
$circle = new Leaf("Circle");
$square = new Leaf("Square");
```

and we create the **composite** components
3:6
```
$compositeShape1 = new Composite("CompositeShape1");
$compositeShape2 = new Composite("CompositeShape2");
```

Adding individual components to composite circle and square
4:6
```
$compositeShape1->add($circle);
$compositeShape1->add($square);
```

Creating a more complex shape by adding a composite to another composite
5:6
```
$compositeShape2->add($compositeShape1);
```
Drawing the shapes
6:6
```
echo "Drawing Individual Components:<br>";
$circle->draw();
$square->draw();
```

and the **Composite Shapes**

```
echo "<br>Drawing Composite Shapes:<br>";
$compositeShape1->draw();
$compositeShape2->draw();
```


[page 6](./page06.md)
