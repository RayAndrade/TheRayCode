[home](./page01.md)

[back](./page03.md)

Now we create the Base Decorator Class

- **Purpose:** It's an abstract class and acts as a base for all decorators. It has a reference to a `Component`, meaning it can wrap around a concrete component or another decorator.
    - **Key Aspects:**
      - Holds a reference to a `Component` (`$component`).
      - The `operation` method is implemented here, but it just delegates the call to the wrapped component.
    - **Role:** This class facilitates the dynamic addition of responsibilities to objects. Any concrete decorator will extend this class to inherit its wrapping capabilities.

create class
```
Decorator
```

make class 
```
abstract
```

```
 implements Component
```    

``` 
protected $component;
```

```
public function __construct(Component $component) {
    $this->component = $component;
}
```

```
public function operation(): string {
    return $this->component->operation();
}
```


[page 5](./page05.md)
