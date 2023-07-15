[home](./page01.md)

[back](./page07.md)

we go to Program where we find the main method.

In the Program class, we create a new DessertFactory and use it to create Dessert objects.

```
DessertFactory dessertFactory = new DessertFactory();

Dessert dessert1 = dessertFactory.getDessert("ICECREAM");
dessert1.prepare();

Dessert dessert2 = dessertFactory.getDessert("CAKE");
dessert2.prepare();
```

[page 9](./page09.md)
