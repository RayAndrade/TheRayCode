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


add some more code to the top
```
private $adaptee;

public function __construct(Adaptee $adaptee)
{
    $this->adaptee = $adaptee;
}
```
and in **auto added request()** add: 
```
return "Adapter: " . $this->adaptee->specificRequest();
```



[page 5](./page05.md)
