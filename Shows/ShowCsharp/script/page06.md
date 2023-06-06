[home](./page01.md)

[back](./page05.md)

Now, we can create the **MargheritaPizzaBuilder** class 

```
MargheritaPizzaBuilder
```
that implements the **IPizzaBuilder** interface. This class represents a specific type of Pizza, 

```
 : IPizzaBuilder
```

in this case, a **MargheritaPizzaBuilder**.

```
public MargheritaPizzaBuilder() {
    this.Reset();
}

public void Reset() {
    this._pizza = new Pizza();
}

public void BuildDough() {
    this._pizza.Dough = "Regular";
}

public void BuildSauce() {
    this._pizza.Sauce = "Tomato";
}

public void BuildTopping() {
    this._pizza.Topping = "Cheese";
}

public Pizza GetPizza() {
    Pizza result = this._pizza;
    this.Reset();
    return result;
}
```

[page 7](./page07.md)
