[home](./page01.md)

[back](./page02.md)


Now, we can create the *PizzaBuilder class* that implements the **IPizzaBuilder** *interface*. This class represents a specific type of Pizza, in this case, a **MargheritaPizzaBuilder**.

```
MargheritaPizzaBuilder
```

extend it with

```
 : IPizzaBuilder
```
Generate the code stubs


**MargheritaPizzaBuilder**: This is a concrete builder that implements the builder interface IPizzaBuilder and provides

we add the define a local **_pizza** variable

```
private Pizza _pizza = new Pizza();

public MargheritaPizzaBuilder()
{
    this.Reset();
}

public void Reset()
{
    this._pizza = new Pizza();
}
```
and we return a new Pizza

now let's define each of our operations:

for **BuildDough**

```
this._pizza.Dough = "Regular";
```

For **BuildSauce**

```
this._pizza.Sauce = "Tomato";
```
for **BuildTopping**

```
this._pizza.Topping = "Cheese";
```
To **GetPizza**

```
Pizza result = this._pizza;
this.Reset();
return result;
```

Our class should look like


```
public class MargheritaPizzaBuilder : IPizzaBuilder
{
    private Pizza _pizza = new Pizza();

    public MargheritaPizzaBuilder()
    {
        this.Reset();
    }

    public void Reset()
    {
        this._pizza = new Pizza();
    }

    public void BuildDough()
    {
        this._pizza.Dough = "Regular";
    }

    public void BuildSauce()
    {
        this._pizza.Sauce = "Tomato";
    }

    public void BuildTopping()
    {
        this._pizza.Topping = "Cheese";
    }

    public Pizza GetPizza()
    {
        Pizza result = this._pizza;
        this.Reset();
        return result;
    }
}
```



[page 4](./page04.md)
