[home](./page01.md)

[back](./page01.md)

We start with the abstract class Component 

```
Component
```

we make it **abstract**

```
abstract 
```

add code
1:5
```
protected $name;
```

2:5
```
 public function __construct(string $name) {
    $this->name = $name;
}
```

3:5
```
abstract public function draw(): void;
```
The draw method is declared as abstract in the Component class because we want all the child classes (both Leaf and Composite) to provide their own implementation of the draw method.

4:5
We can add/remove child components only for Composite objects. 
So, these methods should throw an **exception** here.
```
public function add(Component $component): void {
    throw new Exception("Cannot add to a leaf");
}
```

5:5
```
public function remove(Component $component): void {
    throw new Exception("Cannot remove from a leaf");
}
```



[page 3](./page03.md)
