[home](./page01.md)

[back](./page07.md)

Finally, we can test this in a **Main** method:

```
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
```

[page 9](./page09.md)
