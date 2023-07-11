[home](./page01.md)


The **Builder pattern** is a creational design pattern that lets you construct complex objects step by step. It separates the construction of an object from its representation so that the same construction process can create different representations. It's particularly useful when you need to create an object with lots of possible configuration options.

Below is a simple implementation of the Builder pattern in C#, using a Pizza as the object to build:

Firstly, let's create the **Pizza** public class, this will be the object we're building.

**Pizza**: This is the complex object that we are trying to build. It consists of multiple parts.

```
Pizza
```

add

```
public string Dough { get; set; }
public string Sauce { get; set; }
public string Topping { get; set; }
```

to get the Dough, Sauce and Topping

to display the **Pizza** we use

```
public void DisplayPizza()
{
    Console.WriteLine($"Dough: {Dough}, Sauce: {Sauce}, Topping: {Topping}");
}
```

For the **Console.WriteLine** we add the System

```
using System;
```
finished should look like:

```
public class Pizza
{
    public string Dough { get; set; }
    public string Sauce { get; set; }
    public string Topping { get; set; }

    public void DisplayPizza()
    {
        Console.WriteLine($"Dough: {Dough}, Sauce: {Sauce}, Topping: {Topping}");
    }
}
```


[page 2](./page02.md)
