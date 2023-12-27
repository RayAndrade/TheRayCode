[home](./page01.md)

Create class
```
Component
```
make it
```
abstract
```
add code:
## 1
```
protected $name;

public function __construct($name) {
    $this->name = $name;
}
```
## 2
```
public abstract function operation();
```
## 3

```
    /**
     * @throws Exception
     */
public function add(Component $component) {
    throw new Exception("Unsupported operation");
}
```

## 4
```
```


[page 3](./page03.md)
