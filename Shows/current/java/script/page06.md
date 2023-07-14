[home](./page01.md)

[back](./page05.md)

We go to **Main**

Program: This is the class where the program execution begins. 

It creates an instance of DessertFactory and uses it to create specific desserts. It calls the prepare method on the created objects, but it's unaware of the actual type of the dessert (whether it's a Cake or IceCream), thanks to the abstraction provided by the Dessert interface. 

The main role of this class is to demonstrate the use of the factory design pattern.

add code

```
DessertFactory dessertFactory = new DessertFactory();
        
Dessert dessert1 = dessertFactory.getDessert("Cake");
dessert1.prepare();

Dessert dessert2 = dessertFactory.getDessert("IceCream");
dessert2.prepare();
```


[page 7](./page07.md)
