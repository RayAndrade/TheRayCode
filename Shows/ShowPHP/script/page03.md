[home](./page01.md)

[back](./page02.md)

Next, let's create a concrete class called **Car** that implements the **CloneablePrototype** interface. 
The **Car** class will have properties like *brand* and *color*, and it will implement the **clone()** method to perform a shallow copy:

```
Car
```

which
```
 implements CloneablePrototype
```
At he top we have
```
private $brand;
private $color;

public function __construct($brand, $color)
{
    $this->brand = $brand;
    $this->color = $color;
}

public function getBrand()
{
    return $this->brand;
}
```


```
public function getBrand()
{
    return $this->brand;
}

public function getColor()
{
    return $this->color;
}

public function clone(): CloneablePrototype
{
    return clone $this;
}
```




[page 4](./page04.md)
