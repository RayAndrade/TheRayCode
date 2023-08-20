[home](./page01.md)

[back](./page05.md)

And we create a **SugarDecorator**

Another Concrete Decorator
    - **Purpose:** Adds "sugar" functionality to any component it wraps.
    - **Key Aspects:**
      - Similar to `MilkDecorator`, it extends the base `Decorator` class.
      - Modifies the `operation` method to add its own behavior (`+ Sugar`).
    - **Role:** Acts similarly to the `MilkDecorator`, but instead, adds sugar to our coffee.

```
SugarDecorator
```

```
extends Decorator
```

```
public function operation(): string {
    return parent::operation() . " + Sugar";
}
```

[page 7](./page07.md)
