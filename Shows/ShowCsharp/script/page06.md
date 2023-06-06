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

we start with

```
private Pizza _pizza = new Pizza();

public MargheritaPizzaBuilder() {
    this.Reset();
}

public void Reset() {
     this._pizza = new Pizza();
 }
```

in this case, a **MargheritaPizzaBuilder**.

Let implment them

for **BuildDough**
```
this._pizza.Dough = "Regular";
```

for **BuildSauce**
```
this._pizza.Sauce = "Tomato";
```

for **BuildTopping**
```
this._pizza.Topping = "Cheese";
```
.. and for **GetPizza**
```
Pizza result = this._pizza;
this.Reset();
return result;
```

[page 7](./page07.md)
