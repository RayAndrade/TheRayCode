[home](./page01.md)

[back](./page03.md)

Now, we can create the **PizzaBuilder** class that implements the **IPizzaBuilder** interface. 

This class represents a specific type of Pizza, in this case, a **MargheritaPizzaBuilder**.

```
MargheritaPizzaBuilder
```

we make implment the **IPizzaBuilder** interface.

```
 : IPizzaBuilder
```

We add prive variable for the Pizza

```
private Pizza _pizza = new Pizza();
```


```
public MargheritaPizzaBuilder()
{
    this.Reset();
}
```

we add a **Reset** function

```
public void Reset()
{
    this._pizza = new Pizza();
}
```

now lets add functionality to our methods

**BuildDough**

```
this._pizza.Dough = "Regular";
```


[page 5](./page05.md)
