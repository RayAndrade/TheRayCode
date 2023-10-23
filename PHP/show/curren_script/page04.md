[home](./page01.md)

[back](./page03.md)

Next we create the **class**

```
Adapter
```

it 
```
implements Target
```

add method stub
```
public function request(): string
{
    // TODO: Implement request() method.
}
```

add some more code
```
private $adaptee;

public function __construct(Adaptee $adaptee)
{
    $this->adaptee = $adaptee;
}
```



[page 5](./page05.md)
