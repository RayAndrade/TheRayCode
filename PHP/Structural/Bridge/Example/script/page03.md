[home](./page01.md)

[back](./page02.md)

Make **class**

```
Abstraction
```

```
protected $implementation;
```


```
public function __construct(Implementation $implementation)
{
    $this->implementation = $implementation;
}
```


```
public function operation(): string
{
    return "Abstraction: Base operation with:<br/>" .
        $this->implementation->operationImplementation();
}
```




page03


[page 4](./page04.md)
