[home](./page01.md) | [back](./page02.md) | [next](./page04.md)

**ComponentA.php**
```
ComponentA
```
add:
```
 implements Component
```

To the **accept** code we add:
```
$visitor->visitComponentA($this);
```

And we add the function to return "A"
```
public function exclusiveMethodOfComponentA(): string
{
    return "A";
}
```

[page 4](./page04.md)
