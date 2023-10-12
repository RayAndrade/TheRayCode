[home](./page01.md)

[back](./page04.md)

now at the index

```
include_once 'Leaf.php';
include_once 'Composite.php';
```

and we create the composite components

```
$compositeShape1 = new Composite("CompositeShape1");
$compositeShape2 = new Composite("CompositeShape2");
```

Adding individual components to composite circle and square
```
$compositeShape1->add($circle);
$compositeShape1->add($square);
```

Creating a more complex shape by adding a composite to another composite

```
$compositeShape2->add($compositeShape1);
```
Drawing the shapes

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
