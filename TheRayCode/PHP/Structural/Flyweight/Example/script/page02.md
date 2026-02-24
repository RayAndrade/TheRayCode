[home](./page01.md)

[back](./page01.md)

Create **class**
```
Forest
```

**1.3**
```
private array $trees = [];
```

**2.3**
```
public function plantTree(int $x, int $y, string $name, string $color, string $texture): void
{
    $type = TreeFactory::getTreeType($name, $color, $texture);
    $tree = new Tree($x, $y, $type);
    $this->trees[] = $tree;
}
```


**3.3**
```
public function draw(string $canvas): void
{
    foreach ($this->trees as $tree) {
        $tree->draw($canvas);
    }
}
```





[page 3](./page03.md)
