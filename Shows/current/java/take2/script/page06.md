[home](./page01.md)

[back](./page05.md)

we go to Program where we find the main method.

In the Program class, we create a new DessertFactory and use it to create Dessert objects.

```
DessertFactory dessertFactory = new DessertFactory();

Dessert dessert1 = dessertFactory.getDessert("pie");
dessert1.prepare();

Dessert dessert2 = dessertFactory.getDessert("sundae");
dessert2.prepare();
```


[page 7](./page07.md)
