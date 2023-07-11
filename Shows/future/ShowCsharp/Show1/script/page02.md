[home](./page01.md)

[back](./page01.md)


Next, we create the **IPizzaBuilder** *interface*. This interface defines all the steps needed to create a **Pizza**.

**IPizzaBuilder**: This is the builder interface that specifies the steps needed to create a Pizza.

```
IPizzaBuilder
```

add the code to requier the pizza be built to resipie

```
void BuildDough();
void BuildSauce();
void BuildTopping();
Pizza GetPizza();
```

The Code should look like:

```
public interface IPizzaBuilder
{
    void BuildDough();
    void BuildSauce();
    void BuildTopping();
    Pizza GetPizza();
}
```



[page 3](./page03.md)
