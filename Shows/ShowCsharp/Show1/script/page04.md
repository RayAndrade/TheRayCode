[home](./page01.md)

[back](./page03.md)


Then, we have the **Director** class, which will use the builder interface to construct the complex objects step by step.

```
Director
```

```
private IPizzaBuilder _pizzaBuilder;
```

Add:
```
public Director(IPizzaBuilder pizzaBuilder)
{
    this._pizzaBuilder = pizzaBuilder;
}
```
 And
 
```
public void makePizza()
{
    this._pizzaBuilder.BuildDough();
    this._pizzaBuilder.BuildSauce();
    this._pizzaBuilder.BuildTopping();
}
```


The class should look like:
```
public class Director
{
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
}
```



[page 5](./page05.md)
