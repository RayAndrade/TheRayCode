[home](./page01.md)

[back](./page05.md)

 we have the **Director** *class*, which will use the builder interface to construct the complex objects step by step.
 
```
Director
```

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




[page 7](./page07.md)
