[home](./page01.md)

[back](./page03.md)

Now, let's create another class called **Bus** that also implements the **CloneablePrototype** interface. 
The **Bus** class will have similar properties like *brand* and *color*, BUT it will implement the **clone()** method to perform a **deep** copy:

```
Bus
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

public function getColor()
{
    return $this->color;
}

public function clone(): CloneablePrototype
{
    return new Bus($this->brand, $this->color);
}
```



[page 5](./page05.md)
