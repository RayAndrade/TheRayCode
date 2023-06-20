[home](./page01.md)

[back](./page01.md)

```
Pizza
```

Firstly, let's create the Pizza class, this will be the object we're building.

we add some variables that we will need

```
public string Dough { get; set; }
public string Sauce { get; set; }
public string Topping { get; set; }
```

we use getters and setters

and to **DisplayPizza**


```
public void DisplayPizza()
{
    Console.WriteLine($"Dough: {Dough}, Sauce: {Sauce}, Topping: {Topping}");
}
```
for **Console.WriteLine**

```
using System;
```
we need to add 
[page 3](./page03.md)
