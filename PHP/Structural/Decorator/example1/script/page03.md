[home](./page01.md)

[back](./page02.md)

Next we make the **ConcreteComponent**.

```
ConcreteComponent
```

It represents the basic object that we'll be decorating. In this case, it's our plain coffee.

```
implements Component
```
and we add code

```
public function operation(): string {
    return "Plain Coffee";
}
```

 - **Key Aspects:**
      - The `operation` method returns the string "Plain Coffee".
    - **Role:** This class gives us the primary object which will be wrapped by one or more decorators.


[page 4](./page04.md)
