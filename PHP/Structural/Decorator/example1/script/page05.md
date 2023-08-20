[home](./page01.md)

[back](./page04.md)

Now we create a **MilkDecorator** class

```
MilkDecorator
```

```
extends Decorator
```

```
public function operation(): string {
    return parent::operation() . " + Milk";
}
```


[page 6](./page06.md)
