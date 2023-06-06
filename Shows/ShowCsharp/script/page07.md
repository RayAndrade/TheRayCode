[home](./page01.md)

[back](./page06.md)

Then, we have the **Director** *class*, 

```
Director
```

```
 : IPizzaBuilder
```
which will use the builder interface to construct the complex objects step by step.
```
 private IPizzaBuilder _pizzaBuilder;
```

```
public Director(IPizzaBuilder pizzaBuilder) {  }
```

```
this._pizzaBuilder = pizzaBuilder;
```

and the **makePizza**

```
public void makePizza()
{
    this._pizzaBuilder.BuildDough();
    this._pizzaBuilder.BuildSauce();
    this._pizzaBuilder.BuildTopping();
}
```


[page 8](./page08.md)
