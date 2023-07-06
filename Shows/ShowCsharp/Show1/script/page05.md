[home](./page01.md)

[back](./page04.md)

Finally, we can test this in a **Main** method:

```
        //Create a margherita pizza builder
var pizzaBuilder = new MargheritaPizzaBuilder();
```

Use the director to make the pizza
```
        //Create a margherita pizza builder
var pizzaBuilder = new MargheritaPizzaBuilder();
```

```
        // Pass the pizza builder to the director
var director = new Director(pizzaBuilder);
```

```
        // Use the director to make the pizza
director.makePizza();
```


```
        // Retrieve the finished pizza
var pizza = pizzaBuilder.GetPizza();        
```


```
        // Display the pizza
pizza.DisplayPizza();       
```

Your code should look like:

```
class Program
{
    static void Main(string[] args)
    {
        // Create a margherita pizza builder
        var pizzaBuilder = new MargheritaPizzaBuilder();

        // Pass the pizza builder to the director
        var director = new Director(pizzaBuilder);

        // Use the director to make the pizza
        director.makePizza();

        // Retrieve the finished pizza
        var pizza = pizzaBuilder.GetPizza();

        // Display the pizza
        pizza.DisplayPizza();
    }
}
```


[page 6](./page06.md)
