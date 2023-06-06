[home](./page01.md)

[back](./page06.md)

Then, we have the **Director** *class*, 

```
Director
```

Which loks like

```
private IPizzaBuilder _pizzaBuilder;

public Director(IPizzaBuilder pizzaBuilder)
{
    this._pizzaBuilder = pizzaBuilder;
}

public void makePizza()
{
    this._pizzaBuilder.BuildDough();
    this._pizzaBuilder.BuildSauce();
    this._pizzaBuilder.BuildTopping();
}
```

[page 8](./page08.md)
