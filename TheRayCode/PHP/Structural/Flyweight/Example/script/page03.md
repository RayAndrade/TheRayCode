[home](./page01.md)

[back](./page02.md)


Create **class**
```
Tree
```

Add vars **x, y & TreeType**
```
private int $x;
private int $y;
private TreeType $type;
```


**__construct**
```
public function __construct(int $x, int $y, TreeType $type)
{
    $this->x = $x;
    $this->y = $y;
    $this->type = $type;
}
```

**and**
```
public function draw(string $canvas): void
{
    $this->type->draw($canvas, $this->x, $this->y);
}
```



[page 4](./page04.md)
