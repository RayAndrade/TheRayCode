[home](./page01.md)

[back](./page03.md)

**Pizza**: This is the complex object that we are trying to build. It consists of multiple parts.

```
Pizza
```

we add some ingreedants we need to build the pizza.

```
public string Dough { get; set; }
public string Sauce { get; set; }
public string Topping { get; set; }
```

and the we put the pizza on display

```
public void DisplayPizza() {  }
```

```
Console.WriteLine($"Dough: {Dough}, Sauce: {Sauce}, Topping: {Topping}");
```

include **System** for the use of **Console**

 

[page 5](./page05.md)
